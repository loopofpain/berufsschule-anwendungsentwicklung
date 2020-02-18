#include <iostream>
#include <math.h>

int menue(void);
float eingabeBetrag(float betrag);
float berechneEndbetrag(float kapital, float zinssatz, int laufzeit);
float berechneEndbetrag_jaehrlich(float kapital, float zinssatz, int laufzeit);

int main(void)
{
    float kapital = 0.0;
    float endkapital = 0.0;
    float zinssatz = 0.0;
    int laufzeit = 0;
    int auswahl = 0;
    char nochmal = 'n';
    do
    {
        system("clear");
        auswahl = menue();
        switch (auswahl)
        {
        case 1:
            std::cout << "Sparplan berechnen" << std::endl;
            std::cout << std::endl
                      << "Bitte geben Sie das Startkapital in Euro ein: ";
            std::cin >> kapital;
            kapital = eingabeBetrag(kapital);
            std::cout << std::endl
                      << "Bitte geben Sie den Zinssatz in % ein: ";
            std::cin >> zinssatz;
            zinssatz = eingabeBetrag(zinssatz);
            std::cout << std::endl
                      << "Bitte geben Sie die Laufzeit in Jahren ein ";
            std::cin >> laufzeit;
            laufzeit = eingabeBetrag(laufzeit);
            endkapital = berechneEndbetrag(kapital, zinssatz, laufzeit);
            std::cout << std::endl <<"Nach " << laufzeit << "Jahr(en): " << endkapital;
            break;
        case 2:
            std::cout << "Sparplan berechnen" << std::endl;
            std::cout << std::endl
                      << "Bitte geben Sie das Startkapital in Euro ein: ";
            std::cin >> kapital;
            kapital = eingabeBetrag(kapital);
            std::cout << std::endl
                      << "Bitte geben Sie den Zinssatz in % ein: ";
            std::cin >> zinssatz;
            zinssatz = eingabeBetrag(zinssatz);
            std::cout << std::endl
                      << "Bitte geben Sie die Laufzeit in Jahren ein ";
            std::cin >> laufzeit;
            laufzeit = eingabeBetrag(laufzeit);
            berechneEndbetrag_jaehrlich(kapital,zinssatz,laufzeit);
            break;
        default:
            std::cout << "Dieser Menüpunkt ist nicht vorhanden.";
            break;
        }
        std::cout << std::endl << "Wollen Sie nochmal? <J/N>" << std::endl;
        std::cin >> nochmal;
    } while (tolower(nochmal) == 'j');
}

int menue(void)
{
    std::cout << "--------------------------------" << std::endl;
    std::cout << "Bitte Menüpunkt auswählen" << std::endl;
    std::cout << "<1> Sparplan berechnen" << std::endl;
    std::cout << "<2> Sparplan mit jährlicher Ausgabe" << std::endl;
    std::cout << "--------------------------------" << std::endl;
    std::cout << "Ihre Wahl:" << std::endl;

    int wahl = -1;

    std::cin >> wahl;

    if (wahl == 1 || wahl == 2)
    {
        return wahl;
    }
    else
    {
        return -1;
    }
}

float eingabeBetrag(float betrag)
{
    if (betrag <= 0)
    {
        return (betrag * -1.0);
    }
    else
    {
        return betrag * 1.0;
    }
}
float berechneEndbetrag(float kapital, float zinssatz, int laufzeit)
{
    float result = kapital * pow((1.0 + (zinssatz / 100)), laufzeit*1.0);
    return result;
}
float berechneEndbetrag_jaehrlich(float kapital, float zinssatz, int laufzeit)
{
    float ergebnis = 0;
    for(int i = 1; i <= laufzeit ; i++) {
        ergebnis = berechneEndbetrag(kapital,zinssatz,i);
        std::cout << "Nach dem " << i << ".Jahr: " << ergebnis << std::endl;
    }

    return ergebnis;
}
