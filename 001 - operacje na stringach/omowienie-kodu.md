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
Wykorzystać tu można funkcję `length()`, dzięki której porównamy pierwszy i ostatni element tekstu. Stąd wziął się warunek `if(text[0]==text[text.length()-1])`. Pamiętaj, że tak na prawdę `string` jest tablicą `char'ów`, dlatego można odwołać się do pojedynczego elementu `string'a`, np. poprzez wpisanie: `text[0]`.

# Zadanie 2

``` c++
#include <iostream>

using namespace std;

int main() {
    string text;
    int czy_cyfry=0;

    cout << "Wprowadź jakiś tekst: ";
    getline(cin, text);

    for(int i=0; i<text.length(); i++) {
        if(text[i]>='0' && text[i]<='9') czy_cyfry++;
    }

    if(czy_cyfry>0) cout << "W tekście występują cyfry";
    else cout << "W tekście nie ma żadnych cyfr";

    cout << endl;

    return(0);
}
```

Zadanie polega na stwierdzeniu przez program czy wprowadzony przez użytkownika tekst zawiera jakieś cyfry.  
W tym przykładzie dla odmiany zastosowałem do pobrania tekstu funkcji `getline()`, sprawia ona, że po spacji tekst nadal jest zapisywany do zmiennej.  
Zastosowałem tutaj pętlę, która sprawdza każdy jeden element `string'a` czy jest on cyfrą.  
Omówmy teraz warunek w tej pętli: `if(text[i]>='1' && text[i]<='9')`. Jak widzisz, sprawdzam czy element jest większy lub równy *0* i mniejszy lub równy *9*. Ale te cyfry są w cudzysłowach, dlaczego? Dlatego, że zamiast konwertować element na kod ASCII i porównywać czy jest większy od *48* i mniejszy od *57* (w kodzie ASCII), to ja ten element konwertuję ***w locie*** właśnie poprzez umieszczenie cyfr w apostrofach (`' '`), czyli poprzez zadeklarowanie tych wartości jako `char'ów`.

# Zadanie 3

``` c++
#include <iostream>

using namespace std;

int main() {
    string text;
    int licznik_malych_liter=0, licznik_wielkich_liter=0;

    cout << "Wprowadź jakiś tekst: ";
    getline(cin, text);

    for(int i=0; i<text.length(); i++) {
        if(text[i]>='A' && text[i]<='Z') licznik_wielkich_liter++;
            else if(text[i]>='a' && text[i]<='z') licznik_malych_liter++;
    }

    cout << "Ilość wielkich liter: " << licznik_wielkich_liter << endl;
    cout << "Ilość małych liter: " << licznik_malych_liter << endl;

    return(0);
}
```

Zadanie polega na stwierdzeniu przez program ile wielkich i ile małych liter znajduje się we wprowadzonym przez użytkownika tekście.  
Tak samo, jak w poprzednim zadaniu, nie konwertuję elementów tekstu bezpośrednio na kod ASCII, tylko robię to *w locie*. W pierwszym warunku: `if(text[i]>='A' && text[i]<='Z')` sprawdzam czy element jest większy lub równy odpowiednikowi ASCII wielkiej litery *A* i mniejszy lub równy *Z* (oczywiście *w locie*). W drugim warunku: `else if(text[i]>='a' && text[i]<='z')` sprawdzam to samo, ale na małych literach. W zależności od warunku zwiększam licznik wielkich lub małych liter.  
Na końcu programu wyświetlam rezultaty:

``` c++
cout << "Ilość wielkich liter: " << licznik_wielkich_liter << endl;
cout << "Ilość małych liter: " << licznik_malych_liter << endl;
```

# Zadanie 4

``` c++
#include <iostream>

using namespace std;

int main() {
    string text;
    int wielkie_litery=0, male_litery=0, cyfry=0, znaki_specjalne=0, spacje=0, ilosc_znakow=0;

    cout << "Wprowadź jakiś tekst: ";
    getline(cin, text);

    for(int i=0; i<text.length(); i++) {
        if(text[i]>='A' && text[i]<='Z') wielkie_litery++;
            else if(text[i]>='a' && text[i]<='z') male_litery++;
            else if(text[i]>='0' && text[i]<='9') cyfry++;
            else if(text[i]==' ') spacje++;
        else znaki_specjalne++;

        ilosc_znakow++;
    }

    cout << "Ilość wielkich liter: " << wielkie_litery << endl;
    cout << "Ilość małych liter: " << male_litery << endl;
    cout << "Ilość cyfr: " << cyfry << endl;
    cout << "Ilość znaków specjalnych: " << znaki_specjalne << endl;
    cout << "Ilość spacji: " << spacje << endl;
    cout << "Ilość wszystkich znaków: " << ilosc_znakow << endl;
    cout << endl;

    if(wielkie_litery==0) cout << "Brakuje wielkich liter" << endl;
    if(male_litery==0) cout << "Brakuje małych liter" << endl;
    if(cyfry==0) cout << "Brakuje cyfr" << endl;
    if(znaki_specjalne==0) cout << "Brakuje znaków specjalnych" << endl;
    if(spacje==0) cout << "Brakuje spacji" << endl;
    if(ilosc_znakow<8) cout << "Za krótkie hasło" << endl;

    cout << endl;

    return(0);
}
```

Zadanie polega na stwierdzeniu przez program czy wprowadzony przez użytkownika tekst jest bezpiecznym hasłem.  
Tak właściwie, jest to połączenie poprzednich zadań z dodatkowymi rzeczami.  
W pętli są warunki sprawdzające czy element tekstu jest wielką lub małą literą, cyfrą, spacją. Na końcu jest jeszcze: `else znaki_specjalne++;`, który sprawdza czy element jest znakiem specjalnym. Dlaczego `else`, a nie kolejny `else if`? Dlatego, że logicznie, jeżeli już sprawdziłem wszystkie inne typy znaków, to musiały zostać same znaki specjalne.

# Zadanie 5

``` c++
#include <iostream>

using namespace std;

int main() {
    string text;
    int czy_dom=0;
    
    cout << "Wprowadź jakiś tekst: ";
    getline(cin, text);

    for(int i=0; i<text.length(); i++) {
        if(text[i]=='d' && text[i+1]=='o' && text[i+2]=='m') czy_dom++;
    }

    if(czy_dom>0) cout << "W tekście występuje słowo dom";
    else cout << "W tekście nie występuje słowo dom";

    cout << endl;

    return(0);
}
```

Zadanie polega na stwierdzeniu przez program czy wprowadzony przez użytkownika tekst zawiera w sobie słowo *dom*.  
W pętli znajduje się warunek: `if(text[i]=='d' && text[i+1]=='o' && text[i+2]=='m')`, sprawdza on kolejno, czy obecny element (`i`) ma wartość *d*, następny (stąd `i+1`) *o* i kolejny *m* (stąd `i+2`), zwiększa licznik o jeden jeżeli ciąg takich znaków występuje. Jeżeli licznik jest większy od *0*, to program wyświetla, że w tekście występuje słowo *dom*.

# Zadanie 6

``` c++
#include <iostream>

using namespace std;

int main() {
    string text;
    int temp, czy_palindrom=0;

    cout << "Wprowadź jakiś tekst: ";
    getline(cin, text);

    temp=text.length()-1;

    for(int i=0; i<text.length(); i++) {
        if(text[i]==text[temp]) czy_palindrom++;

        temp--;
    }

    if(czy_palindrom==text.length()) cout << "Słowo jest palindromem";
    else cout << "Słowo nie jest palindromem";

    cout << endl;

    return(0);
}
```

Zadanie polega na stwierdzeniu przez program czy wprowadzony przez użytkownika tekst jest palindromem.  
Ustalam zmienną `temp`, która będzie się równała długości tekstu minus jeden. Dlaczego minus jeden? Bo to się później przyda w pętli do porównywania, a wiadomo, że indeksuje się elementy od zera.  
`if(text[i]==text[temp]) czy_palindrom++;` jeżeli pierwszy element jest równy ostatniemu, to zwiększ licznik o jeden. W następnym cyklu pętli `i` zostanie zwiększone o jeden, a `temp` zmniejszone o jeden. Dla przykładu weźmy sobie słowo *kaczka*. W pierwszym cyklu pętli zostaną porównane litery: *k* i *a*, w następnym *a* i *k*, w następnym *c* i *z*. Niestety żadna z tych wartości nie jest sobie równa.  
Wiadomo, że słowo *kajak* jest palindromem, pętla sprawdzi to słowo, na końcu wartość zmiennej `czy_palindrom` powinna wynieść *5*, a skoro *5* również jest długością tego słowa, to takie słowo na pewno jest palindromem.

# Zadanie 7

``` c++
#include <iostream>

using namespace std;

int main() {
    string text, slowo="", wspak="";

    cout << "Wprowadź jakiś tekst: ";
    getline(cin, text);
    text+=' ';
    cout << "Palindromy: ";

    for(int i=0; i<text.length(); i++) {
        if(text[i]==' ') {
            for(int j=slowo.length()-1; j>=0; j--) {
                wspak+=slowo[j];
            }

            if(slowo==wspak) cout << slowo << "; ";

            slowo="";
            wspak="";
        }
        else slowo+=text[i];
    }

    cout << endl;

    return(0);
}
```

Zadanie polega na stwierdzeniu przez program czy wprowadzony przez użytkownika tekst zawiera słowa, które są palindromami.  
W tym zadaniu, w odróżnieniu do poprzedniego, użyłem trochę innej metody ustalania czy dane słowo jest palindromem.

## Metoda wykrywania palindromu
Tutaj, gdy program wykryje pojedyncze słowo, to zacznie je zapisywać od tyłu do nowej zmiennej. Następnie porówna oryginalne słowo ze słowem napisanym wspak, jeżeli będą równe, to znaczy, że to słowo jest palindromem. Stąd się wziął fragment kodu:

``` c++
for(int j=slowo.length()-1; j>=0; j--) {
                wspak+=slowo[j];
            }

            if(slowo==wspak) cout << slowo << "; ";
```

Zmienna `j` przyjmuje wartość długości słowa i zmniejsza się o jeden. Dzięki temu od ostatniego elementu słowa, litery są zapisywane do innej zmiennej.

## Metoda wykrywania słowa
Skoro mamy już to, to powinniśmy mieć jeszcze jakiś sposób na wykrycie w tekście kiedy kończy się słowo. Oparłem to na wykryciu przez program który ze znaków jest spacją, bo jeżeli jest spacja, to logicznym jest to, że słowo się skończyło. Dlatego w głównej pętli mam warunek: `if(text[i]==' ')`, który jeżeli zostanie spełniony, to zostanie wykonana pętla wspomniana w poprzednim podpunkcie (*Metoda wykrywania palindromu*). Jeżeli w tekście nie zostanie wykryta spacja, to wykona się: `else slowo+=text[i];`. Ten `else` jest potrzebny do tworzenia pojedynczego słowa spośród wielu słów w całym tekście, dodaje on kolejne litery do innej zmiennej.