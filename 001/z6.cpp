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