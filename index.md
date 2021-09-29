<link rel="shortcut icon" type="image/png" href="images/opracuj-algorytm-logo_1-1proportion.jpg" >

# Opracuj Algorytm

![Opracuj Algorytm logo](images/opracuj-algorytm-logo.jpg)

To repozytorium służy do nauki języka C++ (w przyszłości możliwe, że HTML). Zawiera ono objaśnienia, analizy kodu, ćwiczenia oraz skrypty i opisy ułatwiające naukę.  
**[LINK DO REPOZYTORIUM](https://github.com/Cimlah/opracuj-algorytm)**

## Przykładowa treść z tego repozytorium:

``` c++
#include <iostream>

using namespace std;

int main() {
    string text;

    cout << "Podaj jakis tekst: ";
    cin >> text;

    if(text[0]==text[text.length()-1]) cout << "Teskt zaczyna i kończy się na tę samą literę";
    else cout << "Tekst nie zaczyna i nie kończy się na tę samą literę";

    cout << endl;

    return(0);
}
```

*Zadanie polega na stwierdzeniu przez program czy wprowadzony przez użytkownika tekst kończy i zaczyna się na tę samą literę.  
Wykorzystać tu można funkcję `length()`, dzięki której porównamy pierwszy i ostatni element tekstu. Stąd wziął się warunek `if(text[0]==text[text.length()-1])`. Pamiętaj, że tak na prawdę `string` jest tablicą `char'ów`, dlatego można odwołać się do pojedynczego elementu `string'a`, np. poprzez wpisanie: `text[0]`.*  
**Ten cytat jest częścią pliku [*omowienie-kodu.md*](https://github.com/Cimlah/opracuj-algorytm/blob/2fff43111b1f6318c545909e5a294030fa9d49ae/001/omowienie-kodu.md)**

# Spis branchów

1. [c++](https://github.com/Cimlah/opracuj-algorytm/tree/c++) - projekty/tutoriale o C++

# Zasady współtworzenia
- Wszelka treść z wyjątkiem bezpośredniego kodu, nazw plików czy katalogów powinna być tworzona w języku polskim. Dozwolone są zrozumiałe informatyczne anglojęzyczne wyrażenia i zwroty.

- Każdy z projektów/tutoriali powinien się znajdować w osobnym katalogu w odpowiednim dla języka branchu. Nazwy katalogów powinny być skrótowe, ale w miarę zrozumiałe.

- W każdym projekcie powinny się znajdować odpowiednie dla systemu operacyjnego osobne katalogi ze skryptami czy innymi plikami wykonawczymi.

- Jeżeli w danym branchu znajdują się dodatkowe zasady współtworzenia, powinno się do nich dostosować.