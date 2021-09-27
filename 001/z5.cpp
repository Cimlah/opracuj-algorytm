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
}