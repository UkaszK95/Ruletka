#ifndef RED_BLACK_H
#define RED_BLACK_H

#include "RodzajZakladu.h"

class RedBlack: public Rodzajzakladu{
	Kolor kolor;
public:
	RedBlack(Kolor _k = Brak) : kolor(_k), Rodzajzakladu(2){}
	bool operator==(const WynikRuletki wynik);
	void Wypisz();
};

#endif