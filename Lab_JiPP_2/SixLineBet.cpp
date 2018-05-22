#include "SixLineBet.h"
#include <iostream>
using namespace std;

bool SixLineBet::operator==(const WynikRuletki wynik)
{
	if(szostka == _1_2_3_4_5_6 && (wynik.GetWynik() >= 1 && wynik.GetWynik() <= 6 ))
		return true;
	else if (szostka == _4_5_6_7_8_9 && (wynik.GetWynik() >= 4 && wynik.GetWynik() <= 9 ))
		return true;
	else if (szostka == _7_8_9_10_11_12 && (wynik.GetWynik() >= 7 && wynik.GetWynik() <= 12 ))
		return true;
	else if (szostka == _10_11_12_13_14_15 && (wynik.GetWynik() >= 10 && wynik.GetWynik() <= 15 ))
		return true;
	else if (szostka == _13_14_15_16_17_18 && (wynik.GetWynik() >= 13 && wynik.GetWynik() <= 18 ))
		return true;
	else if (szostka == _16_17_18_19_20_21 && (wynik.GetWynik() >= 16 && wynik.GetWynik() <= 21 ))
		return true;
	else if (szostka == _19_20_21_22_23_24 && (wynik.GetWynik() >= 19 && wynik.GetWynik() <= 24 ))
		return true;
	else if (szostka == _22_23_24_25_26_27 && (wynik.GetWynik() >= 22 && wynik.GetWynik() <= 27 ))
		return true;
	else if (szostka == _25_26_27_28_29_30 && (wynik.GetWynik() >= 25 && wynik.GetWynik() <= 30 ))
		return true;
	else if (szostka == _28_29_30_31_32_33 && (wynik.GetWynik() >= 28 && wynik.GetWynik() <= 33 ))
		return true;
	else if (szostka ==_31_32_33_34_35_36 && (wynik.GetWynik() >= 31 && wynik.GetWynik() <= 36 ))
		return true;
	else return false;
}

void SixLineBet::Wypisz()
{
	cout << "Six Line Bet - szostki " << endl;
}