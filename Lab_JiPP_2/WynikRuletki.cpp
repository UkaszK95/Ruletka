#include "WynikRuletki.h"

Kolor WynikRuletki:: UstawKolor(int liczba) //Przypisanie kolorow do liczb
{
	if(liczba == 0) return Zielone;
	if(liczba == 10 || liczba == 28) return Czarne;
	if(liczba >=1 && liczba <=9 || liczba >=19 && liczba <=27)
	{
		if(liczba%2 == 0)
			return Czarne;
		else return Czerwone;
	}
	else{
		if(liczba%2 != 0)
			return Czarne;
		else return Czerwone;
	}
	return Brak;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
WynikRuletki:: WynikRuletki() //konstruktor domyslny
{
	liczba = 0;
	kolor = UstawKolor(0);
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
WynikRuletki:: WynikRuletki(int n) //konstruktor
{
	liczba = n;
	kolor = UstawKolor(n);
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int WynikRuletki::  GetWynik() const
{
	return liczba;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void WynikRuletki::  SetWynik(int n)
{
	liczba = n;
	kolor = UstawKolor(n);
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int WynikRuletki::  GetKolor() const
{
	return kolor;
}