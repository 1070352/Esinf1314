#ifndef EstradasNacionais_
#define EstradasNacionais_

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <string.h>
#include "ViasLigacao.h"

using namespace std;

class EstradasNacionais : public ViasLigacao
{
	private:
		string tipoPavimento;//asfalto, paralelo, terra batida, etc.
	public:
		EstradasNacionais();
		EstradasNacionais(const EstradasNacionais &en);
		EstradasNacionais(string tipoPav);
		~EstradasNacionais();

		void setTipoPavimento(string tipoPav);
		double getTipoPavimento();
	

};

#endif