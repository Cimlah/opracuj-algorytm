# Zadanie 1

``` c++
#include <iostream>

using namespace std;

int main() {
    string text;

    cout << "Podaj jakis tekst: ";
    cin >> text;

    if(text[0]==text[text.length()-1]) cout << "Teskt zaczyna i kończy się na tę samą literę";
    else cout << "Tekst nie zaczyna i nie kończy się na tę samą literę";

    cout << endl;

    return(0);
}
```

Zadanie polega na stwierdzeniu przez program czy wprowadzony przez użytkownika tekst kończy i zaczyna się na tę samą literę.  
Wykorzystać tu można funkcję `length()`, dzięki której porównamy pierwszy i ostatni element tekstu. Stąd wziął się warunek `if(text[0]==text[text.length()-1])`. Pamiętaj, że tak na prawdę `string` jest tablicą `char'ów`, dlatego można odwołać się do pojedynczego elementu `string'a`, np. poprzez wpisanie: *`text[0]`*