#include "StreetBet.h"
#include <iostream>
using namespace std;

bool StreetBet::operator==(const WynikRuletki wynik)
{
	if(nr_wiersza == 1 && (wynik.GetWynik() >=1 && wynik.GetWynik()<=3))
		return true;
	else if(nr_wiersza == 2 && (wynik.GetWynik() >=4 && wynik.GetWynik()<=6))
		return true;
	else if(nr_wiersza == 3 && (wynik.GetWynik() >=7 && wynik.GetWynik()<=9))
		return true;
	else if(nr_wiersza == 4 && (wynik.GetWynik() >=10 && wynik.GetWynik()<=12))
		return true;
	else if(nr_wiersza == 5 && (wynik.GetWynik() >=13 && wynik.GetWynik()<=15))
		return true;
	else if(nr_wiersza == 6 && (wynik.GetWynik() >=16 && wynik.GetWynik()<=18))
		return true;
	else if(nr_wiersza == 7 && (wynik.GetWynik() >=19 && wynik.GetWynik()<=21))
		return true;
	else if(nr_wiersza == 8 && (wynik.GetWynik() >=22 && wynik.GetWynik()<=24))
		return true;
	else if(nr_wiersza == 9 && (wynik.GetWynik() >=25 && wynik.GetWynik()<=27))
		return true;
	else if(nr_wiersza == 10 && (wynik.GetWynik() >=28 && wynik.GetWynik()<=30))
		return true;
	else if(nr_wiersza == 11 && (wynik.GetWynik() >=31 && wynik.GetWynik()<=33))
		return true;
	else if(nr_wiersza == 12 && (wynik.GetWynik() >=34 && wynik.GetWynik()<=36))
		return true;
	else return false;
}
void StreetBet::Wypisz()
{
	cout <<"Street Bet - 3 liczby"<<endl;
}