#include "ColumnBet.h"
#include <iostream>
using namespace std;

bool ColumnBet::operator==(const WynikRuletki wynik)
{
	if(nrKolumny == 1 && wynik.GetWynik() % 3 == 1)
		return true;
	else if(nrKolumny == 2 && wynik.GetWynik() % 3 == 2)
		return true;
	else if(nrKolumny == 3 && wynik.GetWynik() % 3 == 0)
		return true;
	else return false;
}

void ColumnBet::Wypisz()
{
	if(nrKolumny == 1)
		cout << "Pierwsza kolumna "<<endl;
	else if(nrKolumny == 2)
		cout << "Druga kolumna"<<endl;
	else if(nrKolumny == 3)
		cout << "Trzecia kolumna"<<endl;
}