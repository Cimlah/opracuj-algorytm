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
}