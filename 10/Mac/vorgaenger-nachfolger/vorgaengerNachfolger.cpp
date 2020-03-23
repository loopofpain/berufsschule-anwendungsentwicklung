#include <iostream>

using namespace std;

int vorgaengernachfolger() {
    // Variablen
    unsigned short int eingegebeneZahl = 0;
    //Eingabe
    cout << "Geben Sie eine Zahl ein: " << endl;
    cin >> eingegebeneZahl;
    // Ausgabe
    cout << "Vorgänger: " << (eingegebeneZahl-1) << endl;
    cout << "Aktuelle Zahl: " << (eingegebeneZahl) << endl;
    cout << "Nachfolgergänger: " << (eingegebeneZahl+1) << endl;
    getchar();
    return 0;
}