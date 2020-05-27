#include "zeitmanagment.h"
#include <time.h>
#include <iostream>


void freiesParken(int etage, int parkplatz, int freieZeitInSekunden) {
	static int al_ankunft[3][10] = { {0},{0},{0} };
	time_t aktuelleZeit = time(NULL);

	if (ab_parkhaus[etage][parkplatz] == 0) {
		al_ankunft[etage][parkplatz] = aktuelleZeit;
	}
	else {
		if ((aktuelleZeit - al_ankunft[etage][parkplatz]) > freieZeitInSekunden) {
			long zuBezahlendeZeit = ((aktuelleZeit - freieZeitInSekunden - al_ankunft[etage][parkplatz]) / 60) + 1;
			std::cout << "Zu zahlende Zeit: " << zuBezahlendeZeit << std::endl;
		}
		else {
			std::cout << "Freies Parken" << std::endl;
		}
		al_ankunft[etage][parkplatz] = 0;
	}
}