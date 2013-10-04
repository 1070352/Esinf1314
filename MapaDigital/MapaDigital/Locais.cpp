#include "Locais.h"


Locais::Locais()
{
	desc = "nenhuma";
}

Locais::Locais(const Locais &loc)
{
	setDescricao(loc.desc);
}


Locais::Locais(string d)
{
	desc = d;
}

Locais::~Locais(){}


void Locais::contarLocais() const
{
	int historicos = 0;
	int naturais = 0;

	for (int i=0; i<actual; i++)
	{
		if (typeid(*vec[i]) == typeid(LocaisNaturais)) historicos++;
		if (typeid(*vec[i]) == typeid(LocaisHistoricosCulturais)) naturais++;
	}
	cout << "Total de Locais" << endl;
	cout << "::::::::::Locais Naturais: " << historicos << " vias." << endl;
	cout << "::::::::::Locais Historicos Naturais: " << naturais << " vias." << endl;
}




