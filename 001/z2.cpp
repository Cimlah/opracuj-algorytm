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