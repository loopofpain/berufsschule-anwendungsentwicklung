#include <iostream>

using namespace std;

void parkplatzbelegungAusgeben(bool a_parkplatz[10]);
void freieParkplatznummer(bool a_parkplatz[10]);
void nichtBelegteParkplaetze(bool a_parkplatz[10]);
void ausparken(int parkplatzNr, bool parkplatz[10]);
void parken(int parkplatzNr, bool parkplatz[10]);

int main()
{
    int option = 0;
    int parkplatzNr = 0;
    bool parkplatz[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    cout << "Parkplatz Überwachungssystem" << endl;

    while (true)
    {
        cout << endl
             << "Bitte wählen Sie eine Option aus.";
        cout << endl
             << "1: Auto parkt ein";
        cout << endl
             << "2: Auto parkt aus";
        cout << endl
             << "3: Ausgabe des ersten freien Parkplatzes";
        cout << endl
             << "4: Anzahl freier Parkplätze";
        cout << endl
             << "Gewählte Option: ";
        cin >> option;

        switch (option)
        {
        case 1:
            parken(parkplatzNr, parkplatz);
            break;

        case 2:
            ausparken(parkplatzNr, parkplatz);
            break;
        case 3:
            freieParkplatznummer(parkplatz);
            break;
        case 4:
            nichtBelegteParkplaetze(parkplatz);
            break;
        default:
            cout << "Option existiert nicht. Bitte wählen Sie eine andere Option aus.";
            break;
        }

        parkplatzbelegungAusgeben(parkplatz);
    }

    return 0;
}

void parkplatzbelegungAusgeben(bool a_parkplatz[10])
{
    cout << endl
         << "Aktuelle Parkplatzbelegung: ";

    for (int i = 0; i < 10; i++)
    {
        cout << '|' << (int)a_parkplatz[i];
    }
    cout << '|' << endl;
}
void freieParkplatznummer(bool a_parkplatz[10])
{
    cout << endl
         << "Nummer des nächsten freien Parkplatzes: ";
    for (int i = 0; i < 10; i++)
    {
        if (a_parkplatz[i] == 0)
        {
            cout << i << endl;
            break;
        }
    }
}

void ausparken(int parkplatzNr, bool parkplatz[10])
{
    cout << endl
         << "Auto will ausparken";
    cout << endl
         << "Angesteuerte Parkplatz Nr.: ";
    cin >> parkplatzNr;

    if (parkplatzNr >= 0 && parkplatzNr <= 9)
    {
        if (parkplatz[parkplatzNr] == 1)
        {
            parkplatz[parkplatzNr] = 0;
            cout << endl
                 << "Ausgeparkt!";
        }
        else
        {
            cout << endl
                 << "Parplatz was nicht belegt!";
        }
    }
    else
    {
        cout << endl
             << "Parkplatz existiert nicht!";
    }
}

void nichtBelegteParkplaetze(bool a_parkplatz[10])
{
    int anzahl = 0;
    cout << endl
         << "Nicht belegte Parkplatz: ";
    for (int i = 0; i < 10; i++)
    {
        if (a_parkplatz[i] == 0)
        {
            anzahl++;
        }
    }
    cout << anzahl << endl;
}

void parken(int parkplatzNr, bool parkplatz[10]){
    cout << endl
                 << "Auto will parken";
            cout << endl
                 << "Angesteuerte Parkplatz Nr.: ";
            cin >> parkplatzNr;
            if (parkplatzNr >= 0 && parkplatzNr <= 9)
            {
                if (parkplatz[parkplatzNr] == 0)
                {
                    parkplatz[parkplatzNr] = 1;
                    cout << endl
                         << "Eingeparkt!";
                }
                else
                {
                    cout << endl
                         << "Parplatz belegt! Fahrer fährt weiter...";
                }
            }
            else
            {
                cout << endl
                     << "Parkplatz existiert nicht!";
            }
}