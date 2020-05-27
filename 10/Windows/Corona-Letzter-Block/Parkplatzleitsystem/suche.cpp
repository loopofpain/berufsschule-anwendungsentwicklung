#include "suche.h"
#include <iostream>



int suchefreieEtage(void)
{
	for (int i = 0;i < 3; i++) {
		if (suchefreienParkplatz(i) > -1) {
			return i;
		}
	}
	return -1;
}

int suchefreienParkplatz(int iEtagenNr)
{
	//Hier muss der Funktionscode rein
	//liefert den am weitesten von der Mitte ausgehenden freien Parkplatz (bei gleichweit
	//entfernten Parkpl�tzen den mit der kleineren Zahl) f�r eine Etage zur�ck
	//falls keiner frei, return -1

	for (int i = 0; i <= 4;i++) {
		if (!ab_parkhaus[iEtagenNr][9 - i]) {
			return (9 - i);
		}
		if (!ab_parkhaus[iEtagenNr][i]) {
			return i;
		}
	}
	return -1;
}