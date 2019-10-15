#include <iostream>

using namespace std;

int main(){
    // Variablen
    unsigned int jahreszahl=0;
    // Eingabe
    cout << "Jahreszahl?" << endl;
    cin >> jahreszahl;
    // Ausgabe
    if(jahreszahl%4==0 || jahreszahl%400==0){
        cout << "Schaltjahr" << endl;
    }else {
        cout << "KEIN Schaltjahr" << endl;
    }
    getchar();
    return 0;
}