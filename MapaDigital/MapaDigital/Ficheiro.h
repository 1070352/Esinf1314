#ifndef Ficheiro_
#define Ficheiro_

#include<iostream>
#include <string>
#include <fstream>

using namespace std;


#include "Locais.h"
#include "LocaisHistoricosCulturais.h"
#include "LocaisNaturais.h"
#include "ViasLigacao.h"
#include "AutoEstradas.h"
#include "EstradasNacionais.h"


class Ficheiro{

	private:
		int cont; // Contador para Locais
		char linha[1024]; // Linha com um maximo de 1024 chars
		char *token; // Recebe o valor do split da linha	
		string nomeFicheiro;


		

	public:
		Ficheiro();
		Ficheiro(const Ficheiro &fx);
		Ficheiro(string nome);
		~Ficheiro();


		void setNomeFicheiro(string nome);
		string getNomeFicheiro()const;
		
		void FicheiroLocais();

};
#endif