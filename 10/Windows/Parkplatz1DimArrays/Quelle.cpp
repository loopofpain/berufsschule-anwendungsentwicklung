#include <iostream>

using namespace std;

void printParkinglots(int parkplatz[]);
void setupParkingLots(int* parkplatz);
void printMenu();
void park(int* parkplatz, int parkplatznr);
void pullout(int* parkplatz, int parkplatznr);
void rentAllParkingLots(int* parkplatz);
void getFreeParkingLot(int parkplatz[]);
int getAmountOfFreeParkingLots(int parkplatz[]);
int getChosenParkingLot();

int main() {
	int parkplatz[10];
	setupParkingLots(parkplatz);
	char input=' ';
	
	while (tolower(input)!='q') {
		printParkinglots(parkplatz);
		printMenu();
		cin >> input;
		input = tolower(input);
		cout << endl;

		int gewaehlterParkplatz = 0;
		switch (input)
		{
		case 'p':
			gewaehlterParkplatz = getChosenParkingLot();
			if (gewaehlterParkplatz < 1 && gewaehlterParkplatz > 10) {
				cout << "Ungültige Eingabe" << endl;
			}
			else {
				park(parkplatz, gewaehlterParkplatz);
			}
			break;
		case 'o':
			gewaehlterParkplatz = getChosenParkingLot();
			if (gewaehlterParkplatz < 1 && gewaehlterParkplatz > 10) {
				cout << "Ungültige Eingabe" << endl;
			}
			else {
				pullout(parkplatz, gewaehlterParkplatz);
			}
			break;
		case 'a':
			rentAllParkingLots(parkplatz);
			break;
		case 'f':
			getFreeParkingLot(parkplatz);
			break;
		case 'b':
			int amount = 0;
			amount = getAmountOfFreeParkingLots(parkplatz);
			cout << "Anzahl der freien Parkplaetze: " << amount << endl;
			break;
		}
	}


	return 0;
}

int getAmountOfFreeParkingLots(int parkplatz[]) {
	int amount = 0;
	for (int i = 0; i < 10;i++) {
		if (parkplatz[i] == 0) {
			amount++;
		}
	}
	return amount;
}

void getFreeParkingLot(int parkplatz[]) {
	for (int i = 0; i < 10;i++) {
		if (parkplatz[i]==0) {
			cout << "Freier Parkplatz: " << (i+1) << endl;
			return;
		}
	}
	cout << "Kein freier Parkplatz gefunden." << endl;
}

void rentAllParkingLots(int* parkplatz) {
	int capturedParkingLots = 0;
	capturedParkingLots = getAmountOfFreeParkingLots(parkplatz);
	if (capturedParkingLots == 10) {
		for (int i = 0; i < 10;i++) {
			parkplatz[i] = 1;
		}
	}
	else {
		
		cout << "Fehler, Sie können nicht alle Parkplaetze mieten" << endl;
	}
}

int getChosenParkingLot() {
	int gewaehlterParkplatz = 0;
	cout << "Waehlen Sie einen Parkplatz mit einer Nummer von 1 bis 10" << endl;
	cout << "Eingabe: ";
	cin >> gewaehlterParkplatz;
	cout << endl;
	return gewaehlterParkplatz;
}

void park(int* parkplatz, int parkplatznr) {
	int arrayPosition = (parkplatznr - 1);
	if (parkplatz[arrayPosition] == 0) {
		parkplatz[arrayPosition] = 1;
		cout << "Sie haben erfolgreich eingeparkt" << endl;
	}
	else {
		cout << "Parkplatz belegt" << endl;
	}
}

void pullout(int* parkplatz, int parkplatznr) {
	int arrayPosition = (parkplatznr - 1);
	if (parkplatz[arrayPosition] == 1) {
		parkplatz[arrayPosition] = 0;
		cout << "Sie haben erfolgreich ausgeparkt" << endl;
	}
	else {
		cout << "Parkplatz NICHT belegt" << endl;
	}
}

void printMenu() {
	cout << endl << "Parkautomat" << endl;
	cout << "p oder P - Auf Parkplatz mit der Nummer parken" << endl;
	cout << "o oder O - Auf Parkplatz mit der Nummer ausparken" << endl;
	cout << "a oder A - Alle Parkplaetze mieten" << endl;
	cout << "f oder F - Freien Parkplatz finden" << endl;
	cout << "b oder B - Anzahl freier Parkplaetze" << endl;
	cout << "q oder Q - Programm beenden" << endl;
	cout << "Eingabe: ";
}

void setupParkingLots(int* parkplatz) {
	for (int i = 0; i < 10;i++) {
		parkplatz[i] = 0;
	}
}


void printParkinglots(int parkplatz[])
{
	cout << "Parkplaetze" << endl;
	for (int i = 0; i < 10;i++) {
		cout << "|" << parkplatz[i];
	}
	cout << '|' << endl;
}
