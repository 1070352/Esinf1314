#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <string.h>


#include "Locais.h"
#include "LocaisHistoricosCulturais.h"
#include "LocaisNaturais.h"
#include "ViasLigacao.h"
#include "AutoEstradas.h"
#include "EstradasNacionais.h"
//#include "Ficheiro.h"

int main()
{
	//Ficheiro f;
	char sel;
 
	cout << "------------------------------------" << endl;
	cout << "------------------------------------" << endl;
    cout << "       M A P A   D I G I T A L       " << endl;
	cout << "------------------------------------" << endl;
	cout << "------------------------------------" << endl;
	cout << "Selecione uma opcao" << endl;
    cout << "1. Introduzir um novo local a partir de um ficheiro de texto" << endl;
    cout << "2. Inserir uma via de ligacao a partir do ficheiro" << endl;
	cout << "3. Contabilizar os locais historicos e naturais por ordem alfabetica da sua descricao" << endl;
	cout << "0. Fechar programa\n" << endl;
	cout << "Opcao: ";
	
    cin >> sel;
	

    switch(sel){
        case '1':
			cout << "Opcao 1 " << endl;
			
			//f.LerFicheiroLocais();
			break;
 
        case '2':
            cout << "Opcao 2 " << endl;
			break;
                
		case '3':
			cout << "Opcao 3" << endl;
			break;
 	}



	system("pause");
}
 
 
