#ifndef SPLIT_H
#define SPLIT_H
#include "RodzajZakladu.h"

//enum split{
//	_1_2 = 1, _2_3,  //od lewej do prawej
//	_4_5 = 4, _5_6,
//	_7_8 = 7, _8_9,
//	_10_11 = 10, _11_12,
//	_13_14 = 13, _14_15,
//	_16_17 = 16, _17_18,
//	_19_20 = 19, _20_21,
//	_22_23 = 22, _23_24,
//	_25_26 = 25, _26_27,
//	_28_29 = 28, _29_30,
//	_31_32 = 31, _32_33,
//	_34_35 = 34, _35_36,
//
//	_1_4 = 41, _2_5, _3_6,  // od góry do do³u
//	_4_7, _5_8, _6_9,
//	_7_10, _8_11, _9_12,
//	_10_13, _11_14, _12_15,
//	_13_16, _14_17, _15_18,
//	_16_19, _17_20, _18_21,
//	_19_22, _20_23, _21_24,
//	_22_25, _23_26, _24_27,
//	_25_28, _26_29, _27_30,
//	_28_31, _29_32, _30_33,
//	_31_34, _32_35, _33_36
//};

enum Kierunek{
	prawo, lewo, gora, dol
};
class Split: public Rodzajzakladu{
	int liczba;
	Kierunek kierunek;
public:
	Split (int x, Kierunek kier) : liczba(x), kierunek(kier), Rodzajzakladu(18){}
	bool operator==(const WynikRuletki);
	void Wypisz();
};
#endif