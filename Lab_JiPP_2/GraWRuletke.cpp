#include "GraWRuletke.h"
#include <iostream>
using namespace std;

GraWRuletke ::GraWRuletke(double stan_konta){ //konstruktor
	this->stan_konta = stan_konta;
	indeks = 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void GraWRuletke::Stan_Konta()
{
	cout <<"Stan konta: "<<((this->stan_konta))<<endl;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void GraWRuletke::ObstawZaklad(double kwota, Rodzajzakladu* rodzaj){ 
	if(indeks == 9){
		cout <<"Mozliwe jest tylko 10 zakladow"<<endl;
		return;
	}
	if(kwota<=stan_konta){
		stan_konta -= kwota;
		zaklady[indeks] = new Zaklad(kwota, rodzaj);
		indeks++;
	}
	else if(kwota>stan_konta){
		cout <<"Nie masz takiej kwoty"<<endl;
	}
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void GraWRuletke::ZwiekszStanKonta(Rodzajzakladu * r, double kwota)
{
	double wygrana = kwota * r->Mnoznik();
	cout << "Wygrales " <<wygrana<<"!"<<endl;
	stan_konta += wygrana;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void GraWRuletke::KoniecObstawiania()
{
	ruletka.turlaj();
	WynikRuletki wynik = ruletka.getWynik();
	ruletka.Wypisz(); 
	for(int i =0; i<indeks;i++)
	{
		cout << "Zaklad nr " << i + 1 <<"  ";
		zaklady[i]->Wypisz();
		if(zaklady[i]->CzyWygrana(wynik))
		{
			ZwiekszStanKonta(zaklady[i]->GetRodzaj(), zaklady[i]->GetKwota());
		}
		else cout <<"Nie udalo sie. Sprobuj jeszcze raz!"<<endl;
		delete zaklady[i];
	}
	indeks = 0;
}