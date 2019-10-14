#include <iostream>
#include <iomanip>
using namespace std;
int wahlomat() {
    // Variablendefinition + Variableninitialisierung
    unsigned int i_kandidat_1 = 0;
    unsigned int i_kandidat_2 = 0;
    unsigned int i_stimmanzahl = 0;
    float f_anteil_kandidat_1 = 0;
    float f_anteil_kandidat_2 = 0;
    // Eingabe
    cout << "Wie viele Stimmen hat Kandidat 1 erhalten?" << endl;
    cin >> i_kandidat_1;
    cout << "Wie viele Stimmen hat Kandidat 2 erhalten?" << endl;
    cin >> i_kandidat_2;
    // Verarbeitung
    i_stimmanzahl = i_kandidat_1 + i_kandidat_2;
    f_anteil_kandidat_1= ( i_kandidat_1 *100.0f / i_stimmanzahl);
    f_anteil_kandidat_2=( i_kandidat_2  *100.0f / i_stimmanzahl);
    // Ausgabe
    cout.precision(2);
    cout << fixed;
    cout << "╔═════════════════════════════════════╗" << endl;
    cout << "║              Ergebnisse             ║"<< endl;
    cout << "║ Stimmanteil für Kandidat 1: " << setw(6) << f_anteil_kandidat_1 << "% ║"<< endl;
    cout << "║ Stimmanteil für Kandidat 2: " << setw(6) << f_anteil_kandidat_2 << "% ║" << endl;
    cout << "╚═════════════════════════════════════╝" << endl;
    // Programmende
    getchar();
    return 0;
}