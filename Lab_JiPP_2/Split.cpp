#include "Split.h"
#include <iostream>
using namespace std;

bool Split::operator==(const WynikRuletki wynik)
{
	if(kierunek == gora && (liczba == wynik.GetWynik() || liczba == (wynik.GetWynik() - 3)))
		return true;
	else if(kierunek == dol && (liczba == wynik.GetWynik() || liczba == (wynik.GetWynik() + 3)))
		return true;
	else if(kierunek == lewo && (liczba == wynik.GetWynik() || liczba == (wynik.GetWynik() - 1)))
		return true;
	else if(kierunek == prawo && (liczba == wynik.GetWynik() || liczba == (wynik.GetWynik() + 1)))
		return true;
	else return false;
}

void Split::Wypisz()
{
	cout <<"Split - dwie liczby"<<endl;
}