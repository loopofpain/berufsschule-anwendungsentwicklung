#include <iostream>
using namespace std;
int main() {
    double einkommen=0;
    double ausgabeHandy=0;
    double ausgabeParty=0;
    double ausgabeSchule=0;
    double ausgabeVerkehr=0;
    double ergebnis=0;

    cout << "Einkommen: ";
    cin >> einkommen;
    cout << endl << "Ausgaben - Handy: ";
    cin >> ausgabeHandy;
    cout << endl << "Ausgaben - Party: ";
    cin >> ausgabeParty;
    cout << endl << "Ausgaben - Schule: ";
    cin >> ausgabeSchule;
    cout << endl << "Ausgaben - Verkehr: ";
    cin >> ausgabeVerkehr;
    ergebnis=einkommen - (ausgabeVerkehr+ausgabeParty+ausgabeSchule+ausgabeVerkehr);
    if(ergebnis < 0) {
        if(ergebnis < -100){
            cout << "Jährliche Schulden: " << (ergebnis*12) << endl;
        }else {
            cout << "Noch im Rahmen" << endl;
        }
    }else if(ergebnis > 0) {
        if(ergebnis > 50){
            cout << "Jährliche Ersparnisse: " << (ergebnis*12) << endl;
        }else {
            cout << "Ausgabe - Handy: "<< ((ausgabeHandy*100.0)/einkommen);
            cout << "Ausgabe - Party: "<< ((ausgabeParty*100.0)/einkommen);
            cout << "Ausgabe - Verkehr: "<< ((ausgabeSchule*100.0)/einkommen);
            cout << "Ausgabe - Handy: "<< ((ausgabeVerkehr*100.0)/einkommen);
        }
    }else {
        cout << "Genau auf 0.";
    }
    getchar();
    return 0;
}