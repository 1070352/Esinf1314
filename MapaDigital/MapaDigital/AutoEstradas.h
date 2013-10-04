#ifndef AutoEstradas_
#define AutoEstradas_

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <string.h>
#include "ViasLigacao.h"

using namespace std;

class AutoEstradas : public ViasLigacao
{
	private:
		double precoPortagem;
	public:
		AutoEstradas();
		AutoEstradas(const AutoEstradas &ae);
		AutoEstradas(double preco);
		~AutoEstradas();

		void setPrecoPortagem(double preco);
		double getPrecoPortagem();
	

};

#endif