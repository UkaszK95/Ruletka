#include "DozenBet.h"
#include <iostream>
using namespace std;

bool DozenBet::operator==(const WynikRuletki wynik)
{
	if(ktoryTuzin == 1 && wynik.GetWynik() >=1 && wynik.GetWynik() <=12)
		return true;
	else if(ktoryTuzin == 2 && wynik.GetWynik() >=13 && wynik.GetWynik() <=24)
		return true;
	else if(ktoryTuzin == 3 && wynik.GetWynik() >=25 && wynik.GetWynik() <=36)
		return true;
	else return false;
}

void DozenBet::Wypisz()
{
	if(ktoryTuzin == 1)
		cout << "Pierwszy tuzin (1-12)"<<endl;
	else if(ktoryTuzin == 2)
		cout << "Drugi tuzin (13-24)"<<endl;
	else if(ktoryTuzin == 3)
		cout << "Trzeci  tuzin (25-36)"<<endl;
}