#ifndef STRAITH_UP_H
#define STRAITH_UP_H

#include "RodzajZakladu.h"

class StraightUp : public Rodzajzakladu{
	int liczba;
public:
	StraightUp(int _l) : liczba(_l), Rodzajzakladu(36){}
	bool operator==(const WynikRuletki wynik);
	void Wypisz();
};
#endif 