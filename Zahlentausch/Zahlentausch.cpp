#include <iostream>


using namespace std;

void tauscheZahlen(int&, int&);

int main(){

    int zahl1 = 0;
    int zahl2 = 0;
    int zahl3 = 0;

    cout << "Zahl an der 1.Stelle: ";
    cin >> zahl1;
    cout << endl << "Zahl an der 2.Stelle: ";
    cin >> zahl2;
    cout << endl << "Zahl an der 3.Stelle: ";
    cin >> zahl3;


    if(zahl2>zahl3){
        tauscheZahlen(zahl2,zahl3);
    }
    if(zahl1 > zahl2){
        tauscheZahlen(zahl1,zahl2);
    }
    if(zahl2 > zahl3){
        tauscheZahlen(zahl2,zahl3);
    }
    cout << endl << zahl1 << " " << zahl2 << " " << zahl3;

}


void tauscheZahlen(int& zahl1, int& zahl2) {
    int placeholder = zahl1;
    zahl1 = zahl2;
    zahl2 = placeholder;
} 
