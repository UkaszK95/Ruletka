#ifndef RODZAJ_ZAKLADU_H
#define RODZAJ_ZAKLADU_H

#include "WynikRuletki.h"

class Rodzajzakladu{
protected:
	int mnoz;
public:
	Rodzajzakladu(int _mnoz) : mnoz(_mnoz) { }
	virtual bool operator==(const WynikRuletki wynik) = 0;
	virtual int Mnoznik() { return mnoz; }
	virtual void Wypisz() = 0;
};
#endif
