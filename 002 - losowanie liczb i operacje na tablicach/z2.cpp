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