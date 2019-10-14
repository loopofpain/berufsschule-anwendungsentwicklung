#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    // Variablendefinition + Variableninitialisierung
    double ergebnis = 0;
    string antwort = "";
    unsigned short form = 0;
    unsigned short rechnungsart = 0;
    // Eingabe
    cout << "Quadrat-Kubickmeter-Rechner" << endl;
    cout << "Kreis=1 || Rechteck=2 || Dreieck=3 " << endl;
    cin >> form;
    cout << "Flächeninhalt=1 || Umfang=2" << endl;
    cin >> rechnungsart;
    

    // Verarbeitung
if (rechnungsart == 1)
    {
        if (form == 1)
        {
            double radius = 0;
            cout << "Geben Sie den Radius in cm an." << endl;
            cin >> radius;
            ergebnis = M_PI * pow(radius, 2.0);
        }else if (form == 2)
        {
            double laengeA = 0;
            double laengeB = 0;
            cout << "Geben Sie die Länge der Seite a in cm an." << endl;
            cin >> laengeA;
            cout << "Geben Sie die Länge der Seite a in b an." << endl;
            cin >> laengeB;
            ergebnis = laengeA*laengeB;
        }else if (form == 3)
        {
            double grundseite = 0;
            double hoehe = 0;
            cout << "Geben Sie die Länge der  Höhe in cm an." << endl;
            cin >> grundseite;
            cout << "Geben Sie die Länge der Grundseite in cm an." << endl;
            cin >> hoehe;
            ergebnis = 0.5*(grundseite*hoehe);
        }
        antwort = "Ergebnis: " + to_string(ergebnis) + "cm^2";
    }
    else if (rechnungsart == 2)
    {
        if (form == 1)
        {
            double radius = 0;
            cout << "Geben Sie den Radius in cm an." << endl;
            cin >> radius;
            ergebnis = 2 * M_PI * radius;
        }else if (form == 2)
        {
            double laengeA = 0;
            double laengeB = 0;
            cout << "Geben Sie die Länge der Seite a in cm an." << endl;
            cin >> laengeA;
            cout << "Geben Sie die Länge der Seite b in cm an." << endl;
            cin >> laengeB;
            ergebnis = (2.0*laengeA) + (2.0*laengeB);
        }else if (form == 3)
        {
            double seitea = 0;
            double seiteb = 0;
            double seitec = 0;
            cout << "Geben Sie die Länge der Seite a in cm an." << endl;
            cin >> seitea;
            cout << "Geben Sie die Länge der Seite b in cm an." << endl;
            cin >> seiteb;
            cout << "Geben Sie die Länge der Seite c in cm an." << endl;
            cin >> seitec;
            ergebnis = seitea+seiteb+seitec;
        }
        antwort = "Ergebnis: "+  to_string(ergebnis) + "cm";
    }
    else
    {
        antwort = "Fehler";
    }
    // Ausgabe
    cout << antwort << endl;
    // Programmende
    getchar();
    return 0;
}