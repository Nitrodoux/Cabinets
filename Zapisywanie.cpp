#include <iostream> //biblioteka strumienia we/wy
#include <fstream> //obsluga plikow
#include <string> //biblioteka klasy lancucha znakow
#include <time.h> //biblioteka do obslugi czasu
#include"Wyswietlanie.cpp"
using namespace std;
///Klasa odpowiedzialna za generowanie i zapis do pliku raportu o zamowieniu
class Zapisywanie:public Wyswietlanie
		{
			///iterator okreslajacy nr zamowienia
			int i=0;
		public:	
		///metoda tworzaca plik z zamowieniami w formacie *.txt do raportu o zamowieniu zostaje dolaczona aktuala data i godzina
		void zapisz() {
			
			time_t czas; //zmienna czas typu time_t (long)
	    	struct tm * ptr; //wskaznik do zmiennej czasowej typu tm
	    	time( & czas ); //pobiera czas kalendarzowy
	    	ptr = localtime( & czas ); //konwertuje czas kalendarzowy na lokalny
	    	char * data = asctime( ptr ); //konwertuje date na jej slowna wersje
	    	
			fstream plik; //tworzy plik przy pomocy klasy ifstream
			plik.open("szafki.txt",ios::out | ios::app); //otwatcie pliku szafki.txt
			plik<<"Imie i nazwisko klienta: "<<imie<<" "<<nazwisko<<endl;
			plik<<"Data zamowienia: "<<data;
			plik<<"Elementy potrzebne do montazu szafki nr: "<<i+1<<endl;
			plik<<"1. Wymiary drzwiczek [mm]: "<<" szerokosc: "<<szerokosc_szafki<<", wysokosc: "<<wysokosc_drzwiczek<<", sztuk: "<<liczba_drzwiczek<<endl;
			plik<<"2. Wymiary szuflad [mm]: "<<" szerokosc: "<<szerokosc_szafki<<", wysokosc: "<<wysokosc_szuflady<<", sztuk: "<<liczba_szuflad<<endl;
			plik<<"3. Wymiary plyty bocznej [mm]: "<<" szerokosc: "<<glebokosc_szafki<<", wysokosc: "<<wysokosc_szafki<<", sztuk: "<<2<<endl;
			plik<<"4. Wymiary plyty dolnej/gornej [mm]: "<<" szerokosc: "<<szerokosc_szafki<<", wysokosc: "<<glebokosc_szafki<<", sztuk: "<<2<<endl;
			plik<<"5. Wymiary plyty tylnej [mm]: "<<" szerokosc: "<<szerokosc_szafki<<", wysokosc: "<<wysokosc_szafki<<", sztuk: "<<2<<endl;
			plik<<"6. Uchwyty szuflad sztuk: "<<liczba_szuflad<<endl;
			plik<<"7. Uchwyty drzwiczek sztuk: "<<liczba_drzwiczek<<endl;
			plik<<"8. Prowadnice sztuk: "<<prowadnica<<endl;
			plik<<"9. Zawiasy sztuk: "<<zawiasy<<endl;
			plik<<"10. Nozki sztuk: "<<liczba_nozek<<endl;
			plik<<"*  Calkowita powierzchnia plyty potrzebnej do wyrobu szafki [m^2]: "<<pp_plyty_suma<<endl;
			plik<<"*  Calkowita dlugosc okleiny [mm]: "<<suma_okleina<<endl<<endl;	
			i++;
			// zamknij plik
			plik.close();
		}
};
