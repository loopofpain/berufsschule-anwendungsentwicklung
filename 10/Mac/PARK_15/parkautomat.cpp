#include <iostream>

using namespace std;

int main()
{
    int iZeit = 0;
    float fBetrag = 0.0;
    char cTaste;
    const int iTakt = 15;
    const float fEinheit = 0.15;
    cout << "Drücke p, um die Parkdauer auf 15min zu erhöhen" << endl;
    cin >> cTaste;
    if (cTaste == 'p')
    {
        iZeit = iZeit + iTakt;
        fBetrag = fEinheit * iZeit / iTakt;
        cout << "Drücke o, um den Zettel auszudrucken" << endl;
        cin >> cTaste ;
         if (cTaste == 'o')
        {
            cout << "Parkzeit: " << iZeit << endl;
            cout << "Zu zahlender Betrag: " << fBetrag << endl;
        }else {
            cout << "Max. 15 Minuten" << endl;
        }
    }else {
        cout << "Sie müssen mindestens einmal die P-Taste drücken!" << endl; 
    }
    //getchar();
    //sgetchar();
}