#include<iostream>

int anzahl = 0;
double preisDerWare= 0;
double preisDesPostens = 0;
double gesamtpreis = 0;
char weitereWareImWarenkorb = ' ';


double gesamtbetragBerechnen(double preisPosten,double bisherigeGesamtsumme);


int main() {
    std::cout << "Onlinehändler - Neuer Warenkorb wird angelegt..." << std::endl ;
    do{
        std::cout << "Anzahl der Ware?" << std::endl;
        std::cin >> anzahl;
        std::cout << "Preis der Ware" << std::endl;
        std::cin >> preisDerWare;
        preisDesPostens = anzahl*preisDerWare;
        gesamtpreis = gesamtbetragBerechnen(preisDesPostens,gesamtpreis);
    std::cout << "Möchten Sie einen weiteren Posten eingeben?<j/n>" << std::endl;

    std::cin >> weitereWareImWarenkorb;
    }while(weitereWareImWarenkorb=='j');
    std::cout << "Gesamtbetrag: " << gesamtpreis << std::endl;

}

double gesamtbetragBerechnen(double preisPosten,double bisherigeGesamtsumme) {
    return (bisherigeGesamtsumme+preisPosten);
}