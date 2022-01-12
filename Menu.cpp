#include "Zapisywanie.cpp"
///Klasa okreslajaca dzialanie menu glownego w programie
class Menu:public Zapisywanie
	{
	protected:
		///zmienna odpowiedzialna za wybor funkcji sterujacej switch
		int wybor;
	public:
	///utworzenie obiektu klasy Zapisywanie	
	Zapisywanie szafka;
///Metoda wyswietlajaca menu glowne w petli nieskonczonej. Dostepne opcje to: 1.Dodaj nowe zamowienie, 2.Zapisz raport, 3.Zakoncz dzialanie programu		
void menu_glowne ()
		{
		for(;;) //pêtla nieskoñczona wyœwietlaj¹ca menu
		{
	cout<<"Wybierz opcje z menu glownego: "<<endl;
    cout<<"1.Dodaj nowe zamowienie\n2.Zapisz raport\n3.Zakoncz dzialanie programu\n"<<endl;
    cin>>wybor; //wpisanie wartosci z klawiatury      
    switch(wybor) //instrukcja realizuj¹ca wybor opcji z menu
    {	
    case 1:
    	{
		//wyolanie metod na obiekcie szafka		
		szafka.wpisz();
		szafka.policz();
		szafka.oklejanie();
		szafka.wyswietl();    	
		}
	break;
    case 2:
    		{
			szafka.zapisz();
			}
    break;
	case 3: //po wpisaniu 3 zakoncz dzialanie programu
		{
		exit(0); // funkcja konczaca dzialanie programu
		}	
	}
	}
	}
};

