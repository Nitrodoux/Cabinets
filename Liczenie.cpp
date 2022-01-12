#include "Wpisywanie.cpp"
///Klasa odpowiedzialna za liczenie parametrow szafki na podstawie wprowadzonych danych 
class Liczenie:public Wpisywanie
	{	
			protected:
			///wysokosc szafki
			double wysokosc_szafki;
			///pole powierzchni plyty bocznej
			double pp_plyta_boczna;
			///pole powierzchni plyty gornej
		    double pp_plyta_gorna;
		    ///pole powierzchni plyty czolowej
			double pp_plyta_czolowa;
			///suma pola powierzchni
			double pp_plyty_suma;
			///liczba prowadnic
			int prowadnica;	
			///liczba zawiasow
			int zawiasy;
			///liczba nozek
			int liczba_nozek;			
			public:
		///metoda obliczajaca pole powierzchni plyt oraz sume lacznej powierzchni plyty potrzebnej do wykonaia szafki biurowej okreslone sa tutaj warunki dla ilosci dla liczby nozek, zawiasow i prowadnic		
		void policz() 
		{	
			wysokosc_szafki=liczba_drzwiczek*wysokosc_drzwiczek+liczba_szuflad*wysokosc_szuflady;			
			pp_plyta_boczna=(wysokosc_szafki*glebokosc_szafki);
			pp_plyta_gorna=(szerokosc_szafki*glebokosc_szafki);
			pp_plyta_czolowa=(wysokosc_szafki*szerokosc_szafki);			
			pp_plyty_suma=(pp_plyta_boczna+pp_plyta_gorna+pp_plyta_czolowa)*2/1000000;
			prowadnica=liczba_szuflad*2;
			if (wysokosc_drzwiczek>500)
			zawiasy=liczba_drzwiczek*3;
			else
			zawiasy=liczba_drzwiczek*2;	
			if (pp_plyta_gorna>1)
			liczba_nozek=5;
			else
			liczba_nozek=4;					
		}
	};
