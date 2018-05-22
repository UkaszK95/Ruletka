#ifndef COLUMN_BET_H
#define COLUMN_BET_H

#include "RodzajZakladu.h"

class ColumnBet : public Rodzajzakladu{
	int nrKolumny;
public:
	ColumnBet(int _nr) : nrKolumny(_nr), Rodzajzakladu(3){}
	bool operator==(const WynikRuletki wynik);
	void Wypisz();
};

#endif