#ifndef ZAKLAD_H
#define ZAKLAD_H

#include "Split.h"
#include "Kolor.h"
#include "Parzystosc.h"
#include "RodzajZakladu.h"
#include "WynikRuletki.h"

class Zaklad{
	Rodzajzakladu *rodzajZakladu;
	double kwota;
public:

	Zaklad(); //konstruktor domyslny

	Zaklad(double kwota, Rodzajzakladu * k);  //konstruktor dla ka¿dego zakladu

	Rodzajzakladu *GetRodzaj();  //zwraca rodzaj zakladu

	double GetKwota(); //zwraca kwote zakladu

	bool CzyWygrana(WynikRuletki & wynik); //zwraca 1 lub 0 w zaleznosci od tego czy padla wygrana

	void Wypisz();

	~Zaklad() { delete rodzajZakladu; }
};
#endif