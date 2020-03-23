#include<iostream>

int main() {
    //Variablen
    int iZeit = 0;
    double dBetrag = 0.0;
    char cTaste;
    const int iTakt = 15;
    const double dEinhit = 0.5;

    do{
        std::system("CLS");
        dBetrag = 0.0;
        iZeit = 0;
        std::cout << "Anleitung" << std::endl;
        std::cout << "p drücke und hoffen, dass ein Parkschein kommt." << std::endl;
        do {
            std::cin >> cTaste;
            if(tolower(cTaste)=='p') {
                iZeit+=iTakt;
                dBetrag = dEinhit*iZeit/iTakt;
                std::cout << "Zeit: " << iZeit << std::endl;
                std::cout << "Betrag: " << dBetrag << std::endl;
            }
        }while(tolower(cTaste)=='p' && iZeit < 45);
        if(iZeit > 0) {
                std::cout << "Parkschein"<< std::endl;
                std::cout << "Zeit: " << iZeit << std::endl;
                std::cout << "Betrag: " << dBetrag << std::endl;
        }else {
            std::cout << "Fehlerhafte Eingabe"<< std::endl;
        }
    }while(true);

    std::getchar();
    return 0;
}