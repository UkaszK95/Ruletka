#ifndef SIX_LINE_BET_H
#define SIX_LINE_BET_H
#include "RodzajZakladu.h"

enum Szostki{
	_1_2_3_4_5_6 = 1,
	_4_5_6_7_8_9,
	_7_8_9_10_11_12,
	_10_11_12_13_14_15,
	_13_14_15_16_17_18,
	_16_17_18_19_20_21,
	_19_20_21_22_23_24,
	_22_23_24_25_26_27,
	_25_26_27_28_29_30,
	_28_29_30_31_32_33,
	_31_32_33_34_35_36
};

class SixLineBet : public Rodzajzakladu{
	Szostki szostka;
public:
	SixLineBet(Szostki _nr) : szostka(_nr), Rodzajzakladu(6){}
	bool operator==(const WynikRuletki wynik);
	void Wypisz();
};
#endif