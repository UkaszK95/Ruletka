#ifndef EVEN_ODD_H
#define EVEN_ODD_H
#include "RodzajZakladu.h"
#include "Parzystosc.h"
using namespace std;

class EvenOdd: public Rodzajzakladu{
	Parzystosc parzystosc;
public:
	EvenOdd(Parzystosc _p) : parzystosc(_p), Rodzajzakladu(2){}
	bool operator==(const WynikRuletki wynik);
	void Wypisz();
};

#endif