#ifndef Locais_
#define Locais_

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <string.h>

using namespace std;



class Locais
{
	private:
		string desc;
		int actual;
		Locais **vec;
	public:
		Locais();
		Locais(const Locais & loc);
		Locais(string desc);
		~Locais();

		//set's e get´s
		void setDescricao(string d);
		string getDescricao()const;

		//metodos da classe
		virtual void contarLocais()const;


		//Sobrecarga de operadores
		Locais & operator =(const Locais &loc);
		bool operator >(const Locais &loc);
		bool operator <(const Locais &loc);
		bool operator ==(const Locais &loc);
};
#endif
