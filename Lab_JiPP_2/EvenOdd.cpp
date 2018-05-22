#include "EvenOdd.h"
#include <iostream>
using namespace std;

bool EvenOdd::operator==(const WynikRuletki wynik)
{
	if(parzystosc == (wynik.GetWynik())%2)
	{
		if(parzystosc == parzysty)
			cout <<"Trafiles w parzyste"<<endl;
		else if (parzystosc == nieparzysty)
			cout <<"Trafiles w nieparzyste"<<endl;
		return true;
	}
	else return false;
}
void EvenOdd::Wypisz()
{
	if(parzystosc == parzysty)
		cout << "Parzyste"<<endl;
	else if(parzystosc == nieparzysty)
		cout << "Nieparzyste"<<endl;
}
