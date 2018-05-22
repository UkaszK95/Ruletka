#ifndef STREET_BET_H
#define STREET_BET_H
#include "RodzajZakladu.h"

class StreetBet: public Rodzajzakladu{
	int nr_wiersza;
public:
	StreetBet (int _w) : nr_wiersza(_w),  Rodzajzakladu(12){}
	bool operator==(const WynikRuletki);
	void Wypisz();
};
#endif