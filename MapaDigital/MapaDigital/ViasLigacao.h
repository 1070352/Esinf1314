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
		string codigo; //código da via
		double totalKilometrosVia; //total de KM's da Via
		double tempMedioPercurso;//tempo médio do percurso em minutos entre um local origem e um local destino
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
#endif