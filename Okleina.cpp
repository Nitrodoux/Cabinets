#include "Liczenie.cpp"
///Klasa obliczajaca laczna sume okleiny potrzebna do wykonania szafki na podstawie jej wymiarow
class Okleina:public Liczenie
{	protected:
	///zmienna okreslajaca sume lacznej dlugosci okleiny
	double suma_okleina;	
	public:
		///implementacja metody na obliczenie sumy dlugosci okleiny
		void oklejanie()
		{
			suma_okleina=(wysokosc_szafki+glebokosc_szafki)*4
			+(szerokosc_szafki+glebokosc_szafki)*4
			+(wysokosc_szafki+szerokosc_szafki)*2
			+(wysokosc_drzwiczek+szerokosc_szafki)*2*liczba_drzwiczek
			+(wysokosc_szuflady+szerokosc_szafki)*2*liczba_szuflad;				
		}
};
