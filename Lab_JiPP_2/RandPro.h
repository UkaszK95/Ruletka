#ifndef RAND_PRO_H
#define RAND_PRO_H

#include <ctime>
#include <cstdlib>

class RandPro{
	int min;
	int max;
	int Default_min;
	int Default_max;
public:

	RandPro(int min = 0, int max= 36); //konstruktor

	int losuj(int min, int max); //losowanie liczby z zakresu podanego przez uzytkownika

	int losujDomyslnie();  // metoda losujaca z domyslnego przedzialu
};

#endif
