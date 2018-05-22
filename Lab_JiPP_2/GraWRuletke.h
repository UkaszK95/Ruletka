#ifndef GraWRuletke_H
#define GraWRuletke_H

#include "Ruletka.h"
#include "WynikRuletki.h"
#include "Zaklad.h"
#include "RodzajZakladu.h"

class GraWRuletke{
	Ruletka ruletka;
	Zaklad * zaklady[10];  //Tablica na zaklady

	int indeks;
	double stan_konta;
	double kwota;
	void ZwiekszStanKonta(Rodzajzakladu * r, double kwota); 
public:

	GraWRuletke(double stan_konta = 500); 

	void Stan_Konta();

	void ObstawZaklad(double kwota, Rodzajzakladu * rodzaj); 

	void KoniecObstawiania();

};
#endif