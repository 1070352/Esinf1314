#ifndef ViasLigacao_
#define ViasLigacao_

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <string.h>


class ViasLigacao
{
	private:
		ViasLigacao * * vec;
		string codigo; //c�digo da via
		double totalKilometrosVia; //total de KM's da Via
		double tempMedioPercurso;//tempo m�dio do percurso em minutos entre um local origem e um local destino
		int actual;
		int tamanho;
	
	public:
		ViasLigacao(int tamanho = 2000);
		ViasLigacao();
		ViasLigacao(const ViasLigacao &vias);
		ViasLigacao(string cod,double totalVia,double tempMedio);
		virtual ~ViasLigacao();

		//void setData(const Data & date);
		void setCodigoVia(string cod);
		void setTotalKilometrosVia(double totalVia);
		void setTempoMedioPercurso(double tempMedio);
		
		//const Data & getData()const;
		string getCodigoVia()const;
		double getTotalKilometrosVia()const;
		double getTempoMedioPercurso()const;

		//metodos da classe
		virtual void inserirViaLigacao(ViasLigacao * v);
		virtual void contarVias() const;
		virtual void escreve(ostream & out) const;
		virtual ViasLigacao * clone() const=0;

		//Sobrecarga de operadores
		ViasLigacao & operator =(const ViasLigacao &vias);
		bool operator >(const ViasLigacao &vias);
		bool operator <(const ViasLigacao &vias);
		bool operator ==(const ViasLigacao &vias);
};

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


#endif