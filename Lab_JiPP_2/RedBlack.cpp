#include "RedBlack.h"
#include <iostream>
using namespace std;

bool RedBlack::operator==(const WynikRuletki wynik)
{
	if(kolor == wynik.GetKolor())
	{
		if(kolor == Czarne)
			cout <<"Trafiles w Czarne"<<endl;
		else if (kolor == Czerwone)
			cout <<"Trafiles w Czerwone"<<endl;
		return true;
	}
	else return false;
}
void RedBlack::Wypisz()
{
	if(kolor == Czarne)
		cout << "Czarne" << endl;
	else if(kolor == Czerwone)
		cout << "Czerwone" << endl;
}