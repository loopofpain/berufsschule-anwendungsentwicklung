#include <iostream>
int main() {
    int iZeit=0;
    double dBetrag = 0.0;
    char cTaste;
    const int iTakt = 15;
    const double dEinheit = 0.5;

    std::cout << "1 x p-Taste = Zeit um " << iTakt << " min erhöhen" << std::endl;
    std::cout << "2 x p-Taste = Zeit um " << (iTakt*2) << " min erhöhen" << std::endl;
    std::cout << "1 x o-Taste = bestätigen" << std::endl;

    std::cin >> cTaste;
    
    if(cTaste == 'p'){
        std::cin >> cTaste;
        iZeit = iZeit + iTakt;
        dBetrag = (dEinheit*iZeit)/iTakt;
        if(cTaste == 'p'){
            std::cin >> cTaste;
            iZeit = iZeit + iTakt;
            dBetrag = (dEinheit*iZeit)/iTakt;
            if(cTaste == 'o') {
                std::cout << iZeit << " Minuten " << dBetrag << " Euro" << std::endl;
            }else {
                std::cout << "Max. 30 Minuten" << std::endl;
            }
        }
    }else {
        std::cout << "Sie müssen mindestens einmal die p-Taste drücken!" << std::endl;
    }

//     getchar();
//     getchar();
    return 0;
}