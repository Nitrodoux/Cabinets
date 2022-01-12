Aplikacja umożliwiająca generowanie zapotrzebowania na elementy do montażu indywidualnej szafki biurowej

Opis działania programu

Program składa się z 8 klas oraz funkcji głównej. Klasa Abstract jest abstrakcyjną klasą bazową zawierającą metodę wirtualna wpisz(). Implementacja tej metody znajduje się w klasie Wpisywanie, która dziedziczy publicznie po klasie Abstract. 
W klasie Wpisywanie użytkownik ma możliwość wpisania z klawiatury parametrów zamówienia w metodzie wpisz() takich jak: imię i nazwisko klienta oraz określa liczbę drzwiczek, liczbę szuflad, wysokość drzwiczek, wysokość szuflady, szerokość szafki i głębokość szafki. Wymiary podawane są w mm. Podczas wpisywania wprowadzono zakresy wartości zmiennych, które zabezpieczają użytkownika przed podaniem niewłaściwych danych. Pola tej klasy są chronione, a metoda publiczna.
Klasa Liczenie dziedziczy publicznie po klasie Wpisywanie. W tej klasie znajduje się metoda policz() obliczająca pole powierzchni płyt oraz sumę łącznej powierzchni płyty potrzebnej do wykonania szafki biurowej określone są tutaj warunki dla ilości dla liczby nóżek, zawiasów i prowadnic. Pola tej klasy są chronione, a metoda publiczna.
Klasa Okleina dziedziczy publicznie po klasie Liczenie. Jest to klasa obliczająca łączną sumę okleiny w mm potrzebna do wykonania szafki na podstawie jej wymiarów. Odbywa się to w metodzie oklejanie()  przy użyciu pola suma_okleina. Pola tej klasy są chronione, a metoda publiczna.
Klasa Wyswietlanie dziedziczy publicznie po klasie Okleina. Za pomocą metody wyświetl() wyświetla w konsoli kompletny zestaw parametrów szafki zdefiniowanych przez użytkownika w klasie Wpisywanie oraz obliczonych w klasach Liczenie i Okleina. Klasa zawiera prywatne pole i odpowiadające numerowi zamówienia oraz publiczną metodę. 

Klasa Zapisywanie dziedziczy publicznie po klasie Wyswietlanie. Klasa  ta jest odpowiedzialna za generowanie i zapis do pliku raportu o zamówieniu. Metoda zapisz() tworzy plik z zamówieniami szafka.txt.  Do raportu zostaje dołączona aktualna data i godzina zamówienia. Klasa zawiera prywatne pole i odpowiadające numerowi zamówienia oraz publiczną metodę. 

Klasa Menu dziedziczy publicznie po klasie Zapisywanie. Ta klasa odpowiada za działanie menu głównego programu. Instrukcje sterujące są wykonywane za pomocą funkcji switch i pola chronionego wybor. Klasa tworzy publiczny obiekt szafka w klasie Zapisywanie. Następnie w publicznej metodzie menu_glowne wyświetlane są opcje menu głównego: dodaj nowe zamówienie, zapisz raport lub zakończ działanie programu. Po wybraniu pierwszej opcji na obiekcie szafka wykonywane są metody wpisz(), policz(), oklejanie(), wyświetl(). Po wybraniu opcji drugiej generowany jest raport i na obiekcie szafka wykonywana jest metoda zapisz(). Wybór trzeciej opcji kończy działanie programu. Menu działa w pętli nieskończone, aby użytkownik miał możliwość dodania kolejne zamówienia oraz zapisania raportu.

Klasa Singelton jest wzorcem projektowym, który dziedziczy publicznie po klasie Menu. Klasa zawiera prywatny konstruktor, który jest referencją do obiektu tej klasy. W publicznej metodzie menu_glowne odbywa się inicjalizacja statycznego obiektu menu. Obiekt zostanie utworzony przy pierwszym wywołaniu tej metody i tylko wtedy nastąpi inicjalizacja przy pomocy konstruktora. Każde następne wywołanie jedynie zwróci referencję tego obiektu.
W funkcji głównej programu main.cpp tworzony jest obiekt klasy Singleton i wywoływana na nim metoda menu_glowne().