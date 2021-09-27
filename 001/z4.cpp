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