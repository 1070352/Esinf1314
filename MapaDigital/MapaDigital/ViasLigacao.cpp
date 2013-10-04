#include "ViasLigacao.h"

ViasLigacao::ViasLigacao(){
		codigo = "";
		totalKilometrosVia = 0;
		tempMedioPercurso = 0;
		actual = 0;
		tamanho = 0;
}

ViasLigacao::ViasLigacao(string cod,double totalVia,double tempMedio)
{
	codigo = cod;
	totalKilometrosVia = totalVia;
	tempMedioPercurso = tempMedio;
}


ViasLigacao::ViasLigacao(const ViasLigacao &vias)
{
	setCodigoVia(vias.codigo);
	setTotalKilometrosVia(vias.totalKilometrosVia);
	setTempoMedioPercurso(vias.tempMedioPercurso);
}


ViasLigacao::~ViasLigacao(){}


void ViasLigacao::setCodigoVia(string cod)
{
	codigo = cod;
}

void ViasLigacao::setTotalKilometrosVia(double totalVia)
{
	totalKilometrosVia = totalVia;
}

void ViasLigacao::setTempoMedioPercurso(double tempMedio)
{
	tempMedioPercurso = tempMedio;
}


string ViasLigacao::getCodigoVia() const
{
	return codigo;
}

double ViasLigacao::getTotalKilometrosVia() const
{
	return totalKilometrosVia;
}

double ViasLigacao::getTempoMedioPercurso() const
{
	return tempMedioPercurso;
}





ViasLigacao & ViasLigacao::operator=(const ViasLigacao &vias)
{
	this->codigo = vias.codigo;
	this->totalKilometrosVia = vias.totalKilometrosVia;
	this->tempMedioPercurso = vias.tempMedioPercurso;
	return *this;
}

bool ViasLigacao::operator < (const ViasLigacao & vias)
{
	
}

bool ViasLigacao::operator > (const ViasLigacao & vias)
{

}

bool ViasLigacao::operator == (const ViasLigacao & vias)
{

}

void ViasLigacao::inserirViaLigacao(ViasLigacao *v)
{
	if (actual == tamanho)//axo que nao ta bem pro que se pede.comfirmar......
	{
		tamanho = 2* tamanho;
		ViasLigacao * * vec_tmp = new ViasLigacao * [tamanho];
		for (int i=0; i<actual; i++)
			vec_tmp[i] = vec[i];
		delete [] vec;
		vec = vec_tmp;
	}

	vec[actual] = v->clone();
	actual++;
}
	
void ViasLigacao::contarVias() const
{
	int autoestradas = 0;
	int estradasnacionais = 0;

	for (int i=0; i<actual; i++)
	{
		if (typeid(*vec[i]) == typeid(AutoEstradas)) autoestradas++;
		if (typeid(*vec[i]) == typeid(EstradasNacionais)) estradasnacionais++;
	}
	cout << "Total de Vias de Ligacao" << endl;
	cout << "::::::::::Auto-Estradas: " << autoestradas << " vias." << endl;
	cout << "::::::::::Estradas-Nacionais: " << estradasnacionais << " vias." << endl;
}



void ViasLigacao::escreve(ostream & out) const
{  
	for (int i=0; i<actual; i++)
	{ 
		if (typeid(*vec[i]) == typeid(AutoEstradas)) dynamic_cast <AutoEstradas *>(vec[i])->escreve(cout); 
		if (typeid(*vec[i]) == typeid(EstradasNacionais)) dynamic_cast <EstradasNacionais *>(vec[i])->escreve(cout); 
	} 
}

