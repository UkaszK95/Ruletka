#include "StraightUp.h"
#include <iostream>
using namespace std;

bool StraightUp::operator==(const WynikRuletki wynik)
{
	if(liczba == wynik.GetWynik())
	{
		return true;
	}
	else return false;
}
void StraightUp::Wypisz()
{
	cout <<"Pojedyncza liczba"<<endl;
}