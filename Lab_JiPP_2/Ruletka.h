#ifndef RULETKA_H
#define RULETKA_H

#include "RandPro.h"
#include "WynikRuletki.h"

class Ruletka{
	RandPro random;
	WynikRuletki wynik;
public:
	WynikRuletki turlaj(); //losowanie wyniku

	WynikRuletki getWynik();  

	void Wypisz();
};
#endif