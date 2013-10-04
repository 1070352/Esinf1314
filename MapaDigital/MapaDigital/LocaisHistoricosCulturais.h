#ifndef LocaisHistoricosCulturais_
#define LocaisHistoricosCulturais_

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <string.h>
#include "Locais.h"

using namespace std;



class LocaisHistoricosCulturais : public Locais
{
	private:
		int tempoVisita;//tempo medio de visita em minutos
		int horarioAbertura;//em minutos
		int horarioEncerramento;//em minutos
	public:
		LocaisHistoricosCulturais();
		LocaisHistoricosCulturais(const LocaisHistoricosCulturais &locHist);
		LocaisHistoricosCulturais(string desc,int tempoVisita,int horarioAbertura,int horarioEncerramento);
		~LocaisHistoricosCulturais();


};


#endif