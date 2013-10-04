#ifndef LocaisNaturais_
#define LocaisNaturais_

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <string.h>
#include "Locais.h"

using namespace std;



class LocaisNaturais : public Locais
{
	private:
		double area;//em km2
	public:
		LocaisNaturais();
		LocaisNaturais(const LocaisNaturais &locNat);
		LocaisNaturais(string desc,double a);
		~LocaisNaturais();

		void setArea(string &a);
		double getArea() const;



};



LocaisNaturais::LocaisNaturais(string desc,double a)
{
	area = a;
	

}


#endif
