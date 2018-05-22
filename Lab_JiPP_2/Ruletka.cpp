#include "Ruletka.h"
#include <iostream>
using namespace std;

WynikRuletki Ruletka::turlaj() //losowanie wyniku
{
	wynik.SetWynik(random.losujDomyslnie());
	return wynik;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
WynikRuletki Ruletka:: getWynik()
{
	return wynik;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Ruletka::Wypisz()
{
	if (wynik.GetKolor()==1) cout<<"Wylosowano: "<<wynik.GetWynik() <<", Czarne"<<endl;
	if (wynik.GetKolor()==2) cout<<"Wylosowano: "<<wynik.GetWynik() <<", Czerwone"<<endl;
	if (wynik.GetKolor()==3) cout<<"Wylosowano: "<<wynik.GetWynik() <<", Zielone"<<endl;
}