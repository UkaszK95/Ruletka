#include <iostream>
#include <stdlib.h>
#include <string>
#include <list>
#include <fstream>

#include "GraWRuletke.h"
#include "Split.h"
#include "RedBlack.h"
#include "EvenOdd.h"
#include "DozenBet.h"
#include "StraightUp.h"
#include "1st18__2nd18.h"
#include "StreetBet.h"
#include "CornerBet.h"
#include "ColumnBet.h"
#include "SixLineBet.h"

using namespace std;

void menu(GraWRuletke &gra){
	cout << "       ________    " <<endl;
	cout << "      |    0   |   " << endl;
	cout << "1     |1 |2 |3 |   " << endl;
	cout << "2     |4 |5 |6 |   " << endl;
	cout << "3     |7 |8 |9 |   " << endl;
	cout << "4     |10|11|12|   " << endl;
	cout << "5     |13|14|15|   " << endl;
	cout << "6     |16|17|18|   " << endl;
	cout << "7     |19|20|21|   " << endl;
	cout << "8     |22|23|24|   " << endl;
	cout << "9     |25|26|27|   " << endl;
	cout << "10    |28|29|30|   " << endl;
	cout << "11    |31|32|33|   " << endl;
	cout << "12    |34|35|36|   " << endl;

	cout << endl;
	cout << endl;

	cout <<"<Z>Zaklad"<<endl;
	cout <<"<T>Koniec obstawiania"<<endl;
	cout <<"<K>Koniec gry"<<endl;
	gra.Stan_Konta();
	cout <<">";
	cout << endl;
}
void WypiszZaklady()
{
	cout <<"\nNa co chcesz postawic? " <<endl;
	cout <<"<L> Straigth Up, liczba (0-36)" <<endl;
	cout <<"<S> Split Bet, dwa numery" <<endl;
	cout <<"<J> Street Bet, trzy numery" <<endl;
	cout <<"<H> Corner Bet, czterny numery"<<endl;
	cout <<"<G> Six Line Bet, szesc numerow"<<endl;
	cout <<"<P> Parzyste lub <N> Nieparzyste" <<endl;
	cout <<"<B> Czarny lub <R> Czerwony" <<endl;
	cout <<"<D> Dozen Bet, tuziny (1-12)(13-24) (25-36)" <<endl;
	cout <<"<F> First 18 (1-18), Second 18 (19-36)" << endl;
	cout <<"<C> Column Bet - kolumny "<<endl;
}
void WypiszSplitCase(int ster_wewn_case)
{
	if(ster_wewn_case % 3 == 1)
	{
		cout <<"\nPodaj kierunek na druga liczbe: ";
		if(ster_wewn_case < 4)
			cout <<" <2> Dol  <3> Prawo  ";
		else if(ster_wewn_case > 33)
			cout <<" <1> Gora  <3> Prawo ";
		else cout << "<1> Gora  <2> Dol  <3> Prawo  ";
	}
	else if(ster_wewn_case % 3 == 2)
	{
		if(ster_wewn_case < 4)
			cout <<" <2> Dol  <3> Prawo  <4> Lewo  ";
		else if(ster_wewn_case > 33)
			cout <<" <1> Gora  <3> Prawo  <4> Lewo  ";
		else cout <<" <1> Gora  <2> Dol  <3> Prawo  <4> Lewo  ";
	}
	else if(ster_wewn_case % 3 == 0)
	{
		if(ster_wewn_case < 4)
			cout <<"  <2> Dol  <4> Lewo  ";
		else if(ster_wewn_case > 33)
			cout <<" <1> Gora  <4> Lewo  ";
		else cout <<" <1> Gora  <2> Dol  <4> Lewo  ";
	}
}
void WypiszCornerBetCase()
{
	cout << "<1> 1_2_4_5,       <2> 2_3_5_6,       <3> 4_5_7_8,       <4> 5_6_8_9 "<< endl;
	cout << "<5> 7_8_10_11,     <6> 8_9_11_12,     <7> 10_11_13_14,   <8> 11_12_14_15 "<< endl;
	cout << "<9> 13_14_16_17,   <10> 14_15_17_18,  <11> 16_17_19_20,  <12> 17_18_20_21 "<< endl;
	cout << "<13> 19_20_22_23,  <14> 20_21_23_24,  <15> 22_23_25_26,  <16> 23_24_26_27 "<< endl;
	cout << "<17> 25_26_28_29,  <18> 26_27_29_30,  <19> 28_29_31_32,  <20> 29_30_32_33 "<< endl;
	cout << "<21> 31_32_34_35,  <22> 32_33_35_36 "<< endl;
}
void WypiszSixLineBet()
{
	cout << "<1>   1_2_3_4_5_6          <2>  4_5_6_7_8_9,       <3>  7_8_9_10_11_12 "   << endl;
	cout << "<4>   10_11_12_13_14_15,   <5>  13_14_15_16_17_18, <6>  16_17_18_19_20_21" << endl;
	cout << "<7>   19_20_21_22_23_24,   <8>  22_23_24_25_26_27  <9>  25_26_27_28_29_30" << endl;
	cout << "<10>  28_29_30_31_32_33,   <11> 31_32_33_34_35_36 " << endl;
}
int main()
{
	GraWRuletke gra(1000);
	//fstream wyniki;
POWROT:
	try{
		while(1){
			menu(gra);
			char wybor;
			cin >>wybor;

			bool koniec = false;
			switch(wybor)
			{
			case 'z':
				char rodzaj_zakladu;
				double ilosc;
				WypiszZaklady();
				cin >> rodzaj_zakladu;
				cout <<"\nIle chcesz obstawic? ";
				cin >> ilosc;
				if(ilosc < 1 ) throw new string("Nie mozesz tyle obstawic!");
				int ster_wewn_case;
				switch (rodzaj_zakladu)
				{
				case 'l':
					cout <<"Na jaka liczbe chcesz postawic? ";
					cin >> ster_wewn_case;
					if(ster_wewn_case < 0 || ster_wewn_case > 36) throw new string("Nie ma takiej liczby!");
					gra.ObstawZaklad(ilosc, new StraightUp(ster_wewn_case));
					break;
				case 's':
					int kierunek;
					cout <<"Podaj pierwsza liczbe na jaka chcesz postawic: ";
					cin >> ster_wewn_case;
					if(ster_wewn_case < 0 || ster_wewn_case > 36) throw new string("Nie ma takiej liczby!");
					WypiszSplitCase(ster_wewn_case);
					cin >> kierunek;
					if(kierunek < 1 || kierunek > 4) throw new string("Niepoprawny kierunek!");
					if(kierunek == 1)
						gra.ObstawZaklad(ilosc, new Split(ster_wewn_case, gora));
					else if(kierunek == 2)
						gra.ObstawZaklad(ilosc, new Split(ster_wewn_case, dol));
					else if(kierunek == 3)
						gra.ObstawZaklad(ilosc, new Split(ster_wewn_case, prawo));
					else if(kierunek == 4)
						gra.ObstawZaklad(ilosc, new Split(ster_wewn_case, lewo));
					break;
				case 'j':
					cout <<"Podaj numer wiersza, na ktory chcesz obstawic: ";
					cin >>ster_wewn_case;
					if(ster_wewn_case < 0 || ster_wewn_case > 12) throw new string("Nie ma takiego wiersza!");
					gra.ObstawZaklad(ilosc, new StreetBet(ster_wewn_case));
					break;
				case 'c':
					cout <<"Wybierz kolumne, na ktora chcesz obstawic: ";
					cout << "<1> Pierwsza kolumna  <2> Druga kolumna  <3> Trzecia kolumna "<<endl;
					cin >> ster_wewn_case;
					if(ster_wewn_case < 1 || ster_wewn_case > 3) throw new string("Nie ma takiej kolumny!");
					switch (ster_wewn_case)
					{
					case 1:
						gra.ObstawZaklad(ilosc, new ColumnBet(1));
						break;
					case 2:
						gra.ObstawZaklad(ilosc, new ColumnBet(2));
						break;
					case 3:
						gra.ObstawZaklad(ilosc, new ColumnBet(3));
						break;
					}
					break;
				case 'h':
					WypiszCornerBetCase();
					cout <<"Wybierz czworke liczb: ";
					cin >> ster_wewn_case;
					if(ster_wewn_case < 1 || ster_wewn_case > 22) throw new string("Wybrales zla opcje!");
					switch(ster_wewn_case)
					{
					case 1:
						gra.ObstawZaklad(ilosc, new CornerBet(_1_2_4_5));
						break;
					case 2:
						gra.ObstawZaklad(ilosc, new CornerBet(_2_3_5_6));
						break;
					case 3:
						gra.ObstawZaklad(ilosc, new CornerBet(_4_5_7_8));
						break;
					case 4:
						gra.ObstawZaklad(ilosc, new CornerBet(_5_6_8_9));
						break;
					case 5:
						gra.ObstawZaklad(ilosc, new CornerBet(_7_8_10_11));
						break;
					case 6:
						gra.ObstawZaklad(ilosc, new CornerBet(_8_9_11_12));
						break;
					case 7:
						gra.ObstawZaklad(ilosc, new CornerBet(_10_11_13_14));
						break;
					case 8:
						gra.ObstawZaklad(ilosc, new CornerBet(_11_12_14_15));
						break;
					case 9:
						gra.ObstawZaklad(ilosc, new CornerBet(_13_14_16_17));
						break;
					case 10:
						gra.ObstawZaklad(ilosc, new CornerBet(_14_15_17_18));
						break;
					case 11:
						gra.ObstawZaklad(ilosc, new CornerBet(_16_17_19_20));
						break;
					case 12:
						gra.ObstawZaklad(ilosc, new CornerBet(_17_18_20_21));
						break;
					case 13:
						gra.ObstawZaklad(ilosc, new CornerBet(_19_20_22_23));
						break;
					case 14:
						gra.ObstawZaklad(ilosc, new CornerBet(_20_21_23_24));
						break;
					case 15:
						gra.ObstawZaklad(ilosc, new CornerBet(_22_23_25_26));
						break;
					case 16:
						gra.ObstawZaklad(ilosc, new CornerBet(_23_24_26_27));
						break;
					case 17:
						gra.ObstawZaklad(ilosc, new CornerBet(_25_26_28_29));
						break;
					case 18:
						gra.ObstawZaklad(ilosc, new CornerBet(_26_27_29_30));
						break;
					case 19:
						gra.ObstawZaklad(ilosc, new CornerBet(_28_29_31_32));
						break;
					case 20:
						gra.ObstawZaklad(ilosc, new CornerBet(_29_30_32_33));
						break;
					case 21:
						gra.ObstawZaklad(ilosc, new CornerBet(_31_32_34_35));
						break;
					case 22:
						gra.ObstawZaklad(ilosc, new CornerBet(_32_33_35_36));
						break;
					}
					break;
				case 'g':
					WypiszSixLineBet();
					cout <<"Wybierz szostke, na ktora chcesz obstawic: ";
					cin >> ster_wewn_case;
					if(ster_wewn_case < 1 || ster_wewn_case > 11 ) throw new string("Wybrales zla opcje");
					if(ster_wewn_case == 1) gra.ObstawZaklad(ilosc, new SixLineBet(_1_2_3_4_5_6 ));
					else if(ster_wewn_case == 2) gra.ObstawZaklad(ilosc, new SixLineBet(_4_5_6_7_8_9 ));
					else if(ster_wewn_case == 3) gra.ObstawZaklad(ilosc, new SixLineBet(_7_8_9_10_11_12));
					else if(ster_wewn_case == 4) gra.ObstawZaklad(ilosc, new SixLineBet(_10_11_12_13_14_15));
					else if(ster_wewn_case == 5) gra.ObstawZaklad(ilosc, new SixLineBet(_13_14_15_16_17_18));
					else if(ster_wewn_case == 6) gra.ObstawZaklad(ilosc, new SixLineBet(_16_17_18_19_20_21));
					else if(ster_wewn_case == 7) gra.ObstawZaklad(ilosc, new SixLineBet(_19_20_21_22_23_24));
					else if(ster_wewn_case == 8) gra.ObstawZaklad(ilosc, new SixLineBet(_22_23_24_25_26_27));
					else if(ster_wewn_case == 9) gra.ObstawZaklad(ilosc, new SixLineBet(_25_26_27_28_29_30));
					else if(ster_wewn_case == 10) gra.ObstawZaklad(ilosc, new SixLineBet(_28_29_30_31_32_33));
					else if(ster_wewn_case == 11) gra.ObstawZaklad(ilosc, new SixLineBet(_31_32_33_34_35_36));
					break;
				case 'f':
					cout <<"<1> Pierwsza polowa (1-18)  <2> Druga polowa (19-36)"<<endl;
					cin >> ster_wewn_case;
					if(ster_wewn_case < 0 || ster_wewn_case > 2) throw new string("Wybrales zla opcje!");
					gra.ObstawZaklad(ilosc, new _1st18__2nd18(ster_wewn_case));
					break;
				case 'd':
					cout <<"<1> Pierwszy tuzin (1-12)  <2> Drugi tuzin(13-24)  <3> Trzeci tuzin (25-36)"<<endl;
					cin >> ster_wewn_case;
					if(ster_wewn_case < 0 || ster_wewn_case > 3) throw new string("Wybrales zla opcje!");
					gra.ObstawZaklad(ilosc, new DozenBet(ster_wewn_case));
					break;
				case 'p':
					gra.ObstawZaklad(ilosc, new EvenOdd(parzysty));
					break;
				case 'n':
					gra.ObstawZaklad(ilosc, new EvenOdd(nieparzysty));
					break;
				case 'b':
					gra.ObstawZaklad(ilosc, new RedBlack(Czarne));//gra.ObstawZaklad(ilosc, new RedBlack(Black));
					break;
				case 'r':
					gra.ObstawZaklad(ilosc, new RedBlack(Czerwone));
					break;
				default: break;
				}
				break;
			case 't':
				cout <<"Koniec obstawiania. "<<endl;
				gra.KoniecObstawiania();
				cout <<endl<<endl;
				break;
			case 'k':
				cout <<"Wroc jeszcze! "<<endl;
				koniec = true;
				break;
				cout<<endl;
			}

			if(koniec == true) break;
		}
	}
	catch(string *wyjatek) { cout << *wyjatek << endl; goto POWROT; }

	return 0;
}