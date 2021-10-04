# **Wspólną rzeczą w zadaniach 1-6 jest wylosowanie 20 liczb 3-cyfrowych**

# Zadanie 1

``` c++
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    int liczby[20];

    srand(time(NULL));

    for(int i=0; i<20; i++) {
        liczby[i]=rand()%900+100;
    }

    cout << "Liczby w kolejności 1-20: " << endl;

    for(int i=0; i<20; i++) {
        cout << i+1 << ". " << liczby[i] << endl;
    }

    cout << endl << "Liczby w kolejności 20-1: " << endl;

    for(int i=19; i>=0; i--) {
        cout << i+1 << ". " << liczby[i] << endl;
    }

    cout << endl;

    return(0);
}
```

Zadanie polega na napisaniu programu, który wylosuje liczby i przedstawi je w kolejności 1-20, a później 20-1.  
Jak pewnie zauważyłaś/zauważyłeś, w programie są używane dwie dodatkowe biblioteki: `ctime` i `cstdlib`, pierwsza z nich jest nam potrzebna do pobrania czasu systemowego, a druga do wykonywania losowania liczb.  
Do pobrania czasu wykorzystujemy komendę: `srand(time(NULL));`, na podstawie którego za pomocą operacji *modulo* (`%`) wyznaczymy przedziały losowanych liczb. Stąd się wzięła pętla:
``` c++
for(int i=0; i<20; i++) {
        liczby[i]=rand()%900+100;
    }
```

za pomocą której do kolejnych komórek przypisywane są wylosowane liczby z przedziału *100-999*. `rand()%900+100` oznacza, że losujemy liczby z dziwięciuset liczb (`%900`) i zaczynamy od liczby 100 (`+100`), stąd wziął się wcześniej wspomniany przedział liczbowy *100-999*.  
W następnej pętli:
``` c++
for(int i=0; i<20; i++) {
        cout << i+1 << ". " << liczby[i] << endl;
    }
```

wyświetlamy liczby w kolejności 1-20, czyli zaczynając od pierwszego elementu tablicy, stąd parametry pętli: `for(int i=0; i<20; i++)`. Analogicznie, jeżeli w trzeciej pętli chcę pokazać liczby w odwrotnej kolejności (20-1), to warunek pętli jest następujący: `for(int i=19; i>=0; i--)`. Jedna rzecz mogłaby Cię zastanowić. Dlaczego w środku pętli w przekierowaniu do `cout'a` jest `i+1`? Oczywiście równie dobrze mogłoby być same `i`, ale wtedy wyświetlane liczby byłyby numerowane od *0*.

# Zadanie 2

``` c++
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    int liczby[20], licznik_parzystych=0, licznik_nieparzystych=0;

    srand(time(NULL));

    cout << "Liczby: ";

    for(int i=0; i<20; i++) {
        liczby[i]=rand()%900+100;

        cout << liczby[i] << "; ";

        if(liczby[i]%2==0) licznik_parzystych++;
        else licznik_nieparzystych++;
    }

    cout << endl;

    if(licznik_parzystych>licznik_nieparzystych) cout << "Parzystych liczb jest więcej";
        else if(licznik_parzystych<licznik_nieparzystych) cout << "Nieparzystych liczb jest więcej";
    else cout << "Parzystych i nieparzystych liczb jest tyle samo";

    cout << endl;

    return(0);
}
```

Zadanie polega na napisaniu programu, który wylosuje liczby i określi których jest więcej: parzystych, czy nieparzystych.  
Dodałem dwie dodatkowe zmienne: `licznik_parzystych` i `licznik_nieparzystych`, które domyślnie ustawiam na *0*. W jednej pętli można jednocześnie losować liczby i określać czy jest ona parzyta:
``` c++
for(int i=0; i<20; i++) {
        liczby[i]=rand()%900+100;

        cout << liczby[i] << "; ";

        if(liczby[i]%2==0) licznik_parzystych++;
        else licznik_nieparzystych++;
    }
```

Skupmy się na warunku `if(liczby[i]%2==0)`. Jeżeli dana liczba z tabeli po podzieleniu przez *2* da nam resztę równą *0*, to wykona się: `licznik_parzystych++;`, czyli o *1* zwiększy się licznik liczb parzystych. W przeciwnym wypadku zwiększy się licznik liczb nieparzystych (`else licznik_nieparzystych++;`).  
Poza pętlą znajdują się warunki:
``` c++
if(licznik_parzystych>licznik_nieparzystych) cout << "Parzystych liczb jest więcej";
        else if(licznik_parzystych<licznik_nieparzystych) cout << "Nieparzystych liczb jest więcej";
    else cout << "Parzystych i nieparzystych liczb jest tyle samo";
```

określają one jaki tekst się wyświetli w zależności od tego, których liczb jest więcej: parzystych, czy nieparzystych, oraz jeżeli są równe, to wyświetli się tekst: *Parzystych i nieparzystych liczb jest tyle samo*.