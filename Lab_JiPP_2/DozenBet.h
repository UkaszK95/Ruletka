#ifndef DOZEN_BET_H
#define DOZEN_BET_H
#include "RodzajZakladu.h"

class DozenBet : public Rodzajzakladu{
	int ktoryTuzin;
public:
	DozenBet(int _t) : ktoryTuzin(_t), Rodzajzakladu(3){}
	bool operator==(const WynikRuletki wynik);
	void Wypisz();
};
#endif