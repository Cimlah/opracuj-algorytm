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