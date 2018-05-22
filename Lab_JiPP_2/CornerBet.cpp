#include "CornerBet.h"
#include <iostream>
using namespace std;

bool CornerBet::operator==(const WynikRuletki wynik)
{
	if(czworka == _1_2_4_5  && (wynik.GetWynik() == 1 || wynik.GetWynik()==2 ||wynik.GetWynik() == 4 || wynik.GetWynik()==5))
		return true;
	else if(czworka == _2_3_5_6 && (wynik.GetWynik() == 2 || wynik.GetWynik()==3 ||wynik.GetWynik() == 5 || wynik.GetWynik()==6))
		return true;
	else if(czworka == _4_5_7_8 && (wynik.GetWynik() == 4 || wynik.GetWynik()== 5 ||wynik.GetWynik() == 7 || wynik.GetWynik()==8))
		return true;
	else if(czworka == _5_6_8_9 && (wynik.GetWynik() == 5 || wynik.GetWynik()== 6 ||wynik.GetWynik() == 8 || wynik.GetWynik()==9))
		return true;
	else if(czworka == _7_8_10_11 && (wynik.GetWynik() == 7 || wynik.GetWynik()== 8 ||wynik.GetWynik() == 10 || wynik.GetWynik()== 11))
		return true;
	else if(czworka == _8_9_11_12 && (wynik.GetWynik() == 8 || wynik.GetWynik()== 9 ||wynik.GetWynik() == 11 || wynik.GetWynik()==12))
		return true;
	else if(czworka == _10_11_13_14 && (wynik.GetWynik() == 10 || wynik.GetWynik()== 11 ||wynik.GetWynik() == 13 || wynik.GetWynik()== 14))
		return true;
	else if(czworka == _11_12_14_15 && (wynik.GetWynik() == 11 || wynik.GetWynik()== 12 ||wynik.GetWynik() == 14 || wynik.GetWynik()==15))
		return true;
	else if(czworka == _13_14_16_17 && (wynik.GetWynik() == 13 || wynik.GetWynik()== 14 ||wynik.GetWynik() == 16 || wynik.GetWynik()== 17))
		return true;
	else if(czworka == _14_15_17_18 && (wynik.GetWynik() == 14 || wynik.GetWynik()== 15 ||wynik.GetWynik() == 17 || wynik.GetWynik()== 18))
		return true;
	else if(czworka == _16_17_19_20 && (wynik.GetWynik() == 16 || wynik.GetWynik()== 17 ||wynik.GetWynik() == 19 || wynik.GetWynik()== 22))
		return true;
	else if(czworka == _17_18_20_21 && (wynik.GetWynik() == 17 || wynik.GetWynik()== 18 ||wynik.GetWynik() == 20 || wynik.GetWynik()== 21))
		return true;
	else if(czworka == _19_20_22_23 && (wynik.GetWynik() == 19 || wynik.GetWynik()==20 ||wynik.GetWynik() == 22 || wynik.GetWynik()== 23))
		return true;
	else if(czworka == _20_21_23_24 && (wynik.GetWynik() == 20 || wynik.GetWynik()== 21 ||wynik.GetWynik() == 23 || wynik.GetWynik()== 24))
		return true;
	else if(czworka == _22_23_25_26 && (wynik.GetWynik() == 22 || wynik.GetWynik()== 23 ||wynik.GetWynik() == 25 || wynik.GetWynik()== 26))
		return true;
	else if(czworka == _23_24_26_27 && (wynik.GetWynik() == 23 || wynik.GetWynik()== 24 ||wynik.GetWynik() == 26 || wynik.GetWynik()== 27))
		return true;
	else if(czworka == _26_27_29_30 && (wynik.GetWynik() == 26 || wynik.GetWynik()== 27 ||wynik.GetWynik() == 29 || wynik.GetWynik()== 30))
		return true;
	else if(czworka == _28_29_31_32 && (wynik.GetWynik() == 28 || wynik.GetWynik()== 29 ||wynik.GetWynik() == 31 || wynik.GetWynik()== 32))
		return true;
	else if(czworka == _29_30_32_33 && (wynik.GetWynik() == 29 || wynik.GetWynik()== 30 ||wynik.GetWynik() == 32 || wynik.GetWynik()== 33))
		return true;
	else if(czworka == _31_32_34_35 && (wynik.GetWynik() == 31 || wynik.GetWynik()== 32 ||wynik.GetWynik() == 34 || wynik.GetWynik()== 35))
		return true;
	else if(czworka == _32_33_35_36 && (wynik.GetWynik() == 32 || wynik.GetWynik()== 33 ||wynik.GetWynik() == 35 || wynik.GetWynik()== 36))
		return true;
	else return false;
}
void CornerBet::Wypisz()
{
	cout <<"Corner Bet - 4 liczby"<<endl;
}