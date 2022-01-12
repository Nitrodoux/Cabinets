#include <iostream> //biblioteka strumienia we/wy
#include <string> //biblioteka klasy lancucha znakow

#include "Okleina.cpp"
using namespace std;
///Klasa wyswietlajaca w konsoli kompletny zestaw parametrow szafki zdefinioweanych przez uzytkownika w klasie Wpisywanie oraz obliczonych w klasach Liczenie i Okleina 
class Wyswietlanie:public Okleina
	{
		///iterator odpowiedzialny za nr zamowienia      	
		int i=0;
		public:
		///metoda wyswietlajaca parametry
		void wyswietl()
		 {		  
		 	cout<<"Imie i nazwisko klienta: "<<imie<<" "<<nazwisko<<endl;		 	
			cout<<"Elementy potrzebne do montazu szafki nr: "<<i+1<<endl;
			cout<<"1. Wymiary drzwiczek [mm]: "<<" szerokosc: "<<szerokosc_szafki<<", wysokosc: "<<wysokosc_drzwiczek<<", sztuk: "<<liczba_drzwiczek<<endl;
			cout<<"2. Wymiary szuflad [mm]: "<<" szerokosc: "<<szerokosc_szafki<<", wysokosc: "<<wysokosc_szuflady<<", sztuk: "<<liczba_szuflad<<endl;
			cout<<"3. Wymiary plyty bocznej [mm]: "<<" szerokosc: "<<glebokosc_szafki<<", wysokosc: "<<wysokosc_szafki<<", sztuk: "<<2<<endl;
			cout<<"4. Wymiary plyty dolnej/gornej [mm]: "<<" szerokosc: "<<szerokosc_szafki<<", wysokosc: "<<glebokosc_szafki<<", sztuk: "<<2<<endl;
			cout<<"5. Wymiary plyty tylnej [mm]: "<<" szerokosc: "<<szerokosc_szafki<<", wysokosc: "<<wysokosc_szafki<<", sztuk: "<<2<<endl;
			cout<<"6. Uchwyty szuflad sztuk: "<<liczba_szuflad<<endl;
			cout<<"7. Uchwyty drzwiczek sztuk: "<<liczba_drzwiczek<<endl;
			cout<<"8. Prowadnice sztuk: "<<prowadnica<<endl;
			cout<<"9. Zawiasy sztuk: "<<zawiasy<<endl;
			cout<<"10. Nozki sztuk: "<<liczba_nozek<<endl;
			cout<<"*  Calkowita powierzchnia plyty potrzebnej do wyrobu szafki [m^2]: "<<pp_plyty_suma<<endl;
			cout<<"*  Calkowita dlugosc okleiny [mm]: "<<suma_okleina<<endl<<endl;
			i++;
		}
};



