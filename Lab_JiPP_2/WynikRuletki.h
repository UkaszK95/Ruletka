#ifndef WYNIK_RULETKI_H
#define WYNIK_RULETKI_H

#include "Kolor.h"

class WynikRuletki{
	int liczba;
	Kolor kolor;
	Kolor UstawKolor(int liczba); //Przypisanie kolorow do liczb

public:
	WynikRuletki(); //konstruktor domyslny

	WynikRuletki(int n); //konstruktor

	int GetWynik() const;

	void SetWynik(int n);

	int GetKolor() const ;

};

#endif