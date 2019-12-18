#include <iostream>

int main()
{

    char programmWiederholen;
    do
    {
        short variante = 0;
        short hoehe = 0;
        system("cls");
        std::cout << "--- Weihnachtsbaum" << std::endl;

        std::cout << "Welche Variante soll gezeichnet werden? <1-4>: ";
        std::cin >> variante;
        std::cout << std::endl;
        switch (variante)
        {
        case 1:
            std::cout << "-- Variante 1 --" << std::endl;
            std::cout << "Höhe des Baumes eingeben <5-40>:";
            std::cin >> hoehe;
            std::cout << std::endl;
            if (hoehe >= 5 && hoehe <= 40)
            {
                for (int i = 0; i <= hoehe; i++)
                {
                    std::cout << 'x' << std::endl;
                }
            }
            else
            {
                std::cout << "Ungültige eingabe";
            }
            std::cout << std::endl;
            break;
        case 2:
            std::cout << "-- Variante 2 --" << std::endl;
            std::cout << "Höhe des Baumes eingeben <5-40>:";
            std::cin >> hoehe;
            std::cout << std::endl;
            if (hoehe >= 5 && hoehe <= 40)
            {
                for (int i = 0; i < hoehe; i++)
                {

                    for (int y = 0; y <= i; y++)
                    {
                        std::cout << 'x';
                    }

                    std::cout << std::endl;
                }
            }
            else
            {
                std::cout << "Ungültige eingabe";
            }
            std::cout << std::endl;
            break;
        case 3:
            std::cout << "-- Variante 3 --" << std::endl;
            std::cout << "Höhe des Baumes eingeben <5-40>:";
            std::cin >> hoehe;
            std::cout << std::endl;
            if (hoehe >= 5 && hoehe <= 40)
            {
                for (int baumhoehe = 1, baumstufe = 0, leerzeichenebene = hoehe; baumhoehe <= hoehe; baumhoehe++, leerzeichenebene--, baumstufe++)
                {
                    for (int leerzeichen = leerzeichenebene; leerzeichen >= 0; leerzeichen--)
                    {
                        std::cout << ' ';
                    }
                    for (int anzahlZeichen = 1 + (baumstufe * 2); anzahlZeichen > 0; anzahlZeichen--)
                    {
                        std::cout << 'x';
                    }
                    std::cout << std::endl;
                }
            }
            else
            {
                std::cout << "Ungültige eingabe";
            }
            std::cout << std::endl;
            break;

        case 4:
            std::cout << "-- Variante 4 --" << std::endl;
            std::cout << "Höhe des Baumes eingeben <5-40>:";
            std::cin >> hoehe;
            std::cout << std::endl;
            if (hoehe >= 5 && hoehe <= 40)
            {
                for (int baumhoehe = 1, baumstufe = 0, leerzeichenebene = hoehe; baumhoehe <= hoehe; baumhoehe++, leerzeichenebene--, baumstufe++)
                {
                    for (int leerzeichen = leerzeichenebene; leerzeichen >= 0; leerzeichen--)
                    {
                        std::cout << ' ';
                    }
                    for (int anzahlZeichen = 1 + (baumstufe * 2); anzahlZeichen > 0; anzahlZeichen--)
                    {
                        std::cout << 'x';
                    }
                    if(hoehe!=0){
                        std::cout << std::endl;
                    }
                    
                }
                for (int leerzeichen = hoehe; leerzeichen >= 0; leerzeichen--)
                    {
                        std::cout << ' ';
                }
                std::cout << 'H' << std::endl;
                                for (int leerzeichen = hoehe; leerzeichen >= 0; leerzeichen--)
                    {
                        std::cout << ' ';
                }
                std::cout << 'H' << std::endl << std::endl;
            }
            else
            {
                std::cout << "Ungültige eingabe";
            }
            std::cout << std::endl;
            break;

        default:
            std::cout << "Ungültige Eingabe!" << std::endl;
            break;
        }
        std::cout << "Noch ein Baum? <j/n>: ";
        std::cin >> programmWiederholen;
        std::cout << std::endl;
    } while (programmWiederholen == 'j');

    return 0;
}
