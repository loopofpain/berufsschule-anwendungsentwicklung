#include <iostream>
using namespace std;
int main() {

    // Variablen
    float anhalteweg=0;
    float geschwindigkeit = 0;
    int verzoegerung = 0;
    char nochmal = 'j';
    float abstand = 0;
    int reaktion = 0;
    int verhaeltnis = 0;

    do{

    system("clear");

    cout << "-- Bestimmung des Anhaltewegs --" << endl;
    cout << "Bitte geben Sie die gefahrene Geschwindigkeit in km/h ein: ";
    cin >> geschwindigkeit;
    cout << endl;

    cout << "Bitte geben Sie die restliche  Strecke bis zum Hindernis in m ein: ";
    cin >> abstand;
    cout << endl;

    cout << "Bitte geben Sie die Reaktionszeit in Sekunden ein: ";
    cin >> reaktion;
    cout << endl;


    do{
        cout << "1 - Trockener Beton " << endl;
        cout << "2 - Trockener Asphalt " << endl;
        cout << "3 - Nasser Beton " << endl;
        cout << "4 - Nasser Asphalt " << endl;
        cout << "Bitte geben Sie das Verhältnis an: ";
        cin >> verhaeltnis;
        switch (verhaeltnis)
        {
        case 1:
            verzoegerung = 9;
            break;
        case 2:
            verzoegerung = 7;
            break;
        case 3:
            verzoegerung = 5;
            break;
        case 4:
            verzoegerung = 3;
            break;
        
        default:
        cout << "Fehlermeldung" << endl;
            break;
        }

    }while(verhaeltnis<1 && verhaeltnis>4);

    geschwindigkeit = geschwindigkeit / 3.6;

    anhalteweg = (geschwindigkeit * reaktion) + ((geschwindigkeit*geschwindigkeit) / (2 * verzoegerung));

    if(anhalteweg >= abstand) {
        cout << "Crash" << endl;
    }else {
        cout << "Glück gehabt" << endl;
    }

    cout << "Nochmal? Drücken Sie j" << endl;
    cin >> nochmal;
    }while(nochmal == 'j');

    return 0;
}