#include "Menu.cpp"
///Singleton kreacyjny wzorzec projektowy, ktorego celem jest ograniczenie mozliwosci tworzenia obiektow danej klasy do jednej instancji oraz zapewnienie globalnego dostepu do stworzonego obiektu.
 class Singleton: public Menu
 {
  private:
        Singleton() {} //konstruktor
        Singleton(const Singleton &); //utworzenie referencji do obiektu klasy Singleton
        Singleton& operator=(const Singleton&); //utworzenie operatora do referencji
        ~Singleton() {} //destruktor
  public:
        ///Inicjalizacja statycznego obiektu. Obiekt zostanie utworzony przy pierwszym wywolaniu tej metody i tylko wtedy nastapi inicjalizacja przy pomocy konstruktora. Kazde nastepne wywolanie jedynie zwroci referencje tego obiektu.
        static Singleton& utworz_obiekt()
        {
          static Singleton menu; //utworzenie obiektu statycznego menu
          return menu; //zwrocenie obiektu menu
        }
 };
