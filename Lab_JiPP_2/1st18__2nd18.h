#ifndef FIRST_18_SECOND_18_H
#define FIRST_18_SECOND_18_H
#include "RodzajZakladu.h"
using namespace std;

class _1st18__2nd18: public Rodzajzakladu{
	int ktora_polowa;
public:
	_1st18__2nd18(int _k) : ktora_polowa(_k), Rodzajzakladu(2){}
	bool operator==(const WynikRuletki wynik);
	void Wypisz();
};

#endif