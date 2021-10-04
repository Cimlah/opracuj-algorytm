#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    int liczby[20], najwiekszy, najmniejszy, index_najw=0, index_najm=0;

    srand(time(NULL));

    cout << "Liczby: ";

    for(int i=0; i<20; i++) {
        liczby[i]=rand()%900+100;

        cout << liczby[i] << "; ";

        if(liczby[i]>najwiekszy) {
            najwiekszy=liczby[i];
            index_najw=i;
        }
        
        if(liczby[i]<najmniejszy) {
            najmniejszy=liczby[i];
            index_najm=i;
        }
    }

    cout << endl << "Największym elementem tablicy jest liczba: " << najwiekszy << ", która znajduje się w " << index_najw << ". komórce tabeli" << endl;
    cout << "Najmniejszym elementem tablicy jest liczba: " << najmniejszy << ", która znajduje się w " << index_najm << ". komórce tabeli" << endl;

    return(0);
}