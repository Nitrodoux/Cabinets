#include <iostream> //biblioteka strumienia we/wy
#include <string> //biblioteka klasy lancucha znakow
#include "Abstract.cpp"
using namespace std;
///Klasa umozliwiajaca wprowadzenie danych przez uzytkownika za pomoca klawiatury
class Wpisywanie:public Abstract 
		{
		protected:
		///liczba drzwiczek	
		int liczba_drzwiczek;
		///liczba szuflad
    	int liczba_szuflad;
    	///wysokosc drzwiczek
		double wysokosc_drzwiczek;
		///wysokosc szuflady
		double wysokosc_szuflady;
		/// szerokosc szafki
		double szerokosc_szafki;
		/// glebokosc szafki
	    double  glebokosc_szafki;
	    ///imie klienta
		string imie;
		///nazwisko klienta
		string nazwisko;	  		
	
		public:	
		///W tej metodzie uzytkownik okresla parametry indywidualnej szafki biurowej. Wymiary szafki sa ograniczone do pewnych zakresow
		virtual void wpisz() 
				{
			cout<<"Podaj imie klienta: ";
			cin>>imie;
			cout<<"Podaj nazwisko klienta: ";
			cin>>nazwisko;		
			cout<<"Podaj wymiary szafki: "<<endl;;
			cout<<"Podaj liczbe drzwiczek: ";
			cin>>liczba_drzwiczek;
			while (liczba_drzwiczek>5 || liczba_drzwiczek<0)
			{
			cout<<"Liczba drzwiczek musi byc z zakresu <0;5>: ";
			cin>>liczba_drzwiczek;
			}
			cout<<"Podaj liczbe szuflad: ";
			cin>>liczba_szuflad;
			while (liczba_szuflad>5 || liczba_szuflad<0)
			{
			cout<<"Liczba szuflad musi byc z zakresu <0;5>: ";
			cin>>liczba_szuflad;
			}
			cout<<"Podaj wysokosc drzwiczek [mm]: ";
			cin>>wysokosc_drzwiczek;
			while (wysokosc_drzwiczek>500 || wysokosc_drzwiczek<100)
			{
			cout<<"Wysokosc drzwiczek musi byc z zakresu <100;500>: ";
			cin>>wysokosc_drzwiczek;
			}
			cout<<"Podaj wysokosc szuflady [mm]: ";
			cin>>wysokosc_szuflady;
			while (wysokosc_szuflady>500 || wysokosc_szuflady<100)
			{
			cout<<"Wysokosc szuflady musi byc z zakresu <100;500>: ";
			cin>>wysokosc_szuflady;
			}
			cout<<"Podaj szerokosc szafki [mm]: ";
			cin>>szerokosc_szafki;
			while (szerokosc_szafki>500 || szerokosc_szafki<300)
			{
			cout<<"Szerokosc szafki musi byc z zakresu <300;500>: ";
			cin>>szerokosc_szafki;
			}
			cout<<"Podaj glebokosc szafki [mm]: ";
			cin>>glebokosc_szafki;
			while (glebokosc_szafki>500 || glebokosc_szafki<300)
			{
			cout<<"Glebokosc szafki musi byc z zakresu <300;500>: ";
			cin>>glebokosc_szafki;
			}
			
	
    			
		}
};
