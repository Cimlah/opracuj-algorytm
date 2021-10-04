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