#include "1st18__2nd18.h"
#include <iostream>
using namespace std;

bool _1st18__2nd18::operator==(const WynikRuletki wynik)
{
	if(ktora_polowa == 1 && wynik.GetWynik() >=1 &&wynik.GetWynik() <= 18)
		return true;
	else if(ktora_polowa == 2 && wynik.GetWynik() >= 19 && wynik.GetWynik() <=36)
		return true;
	else return false;
}
void _1st18__2nd18::Wypisz()
{
	if(ktora_polowa == 1)
		cout <<"Pierwsza polowa (1-18)"<<endl;
	else if(ktora_polowa == 2)
		cout <<"Drugi=a polowa (19-36)"<<endl;
}