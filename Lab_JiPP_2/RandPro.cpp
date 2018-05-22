#include "RandPro.h"
#include <iostream>
using namespace std;

RandPro::RandPro(int min, int max) : Default_min(min), Default_max(max)  //Konstruktor domyslny
{
	if (min > max)
		throw new string("Niepoprawne dane");
	srand((unsigned)time(NULL));
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int RandPro:: losuj(int min, int max) //losowanie liczby z zakresu podanego przez uzytkownika
{
	 return rand() % (max - min +1) + min;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int RandPro:: losujDomyslnie()  // metoda losujaca z domyslnego przedzialu
{
	return losuj(Default_min, Default_max);
}