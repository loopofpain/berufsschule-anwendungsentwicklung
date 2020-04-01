#include <iostream>

using namespace std;

void spielfeldAnzeigen(char spielfeld[5][8]);
void spielfeldFuellen(char spielfeld[5][8]);
bool istBelegt(char spielfeld[5][8], int x, int y);
void spielzug(char spielfeld[5][8], char symbol, int x, int y);
char dominantX(char spielfeld[5][8], char spieler1, char spieler2);
char dominantY(char spielfeld[5][8], char spieler1, char spieler2);
char diagonalA(char spielfeld[5][8], char spieler1, char spieler2);
char pruefeGewinn(char spielfeld[5][8], char spieler1, char spieler2);

int main() {
	int werIstDran = 0;
	string spielerListe[2];
	char symbolSpieler1 = 'X';
	char symbolSpieler2 = 'Y';
	char spielfeld[5][8];
	bool isGameActive = true;

	cout << "Name von Spieler 1: ";
	cin >> spielerListe[0];

	cout << endl << "Name von Spieler 2: ";
	cin >> spielerListe[1];
	cout << endl;

	spielfeldFuellen(spielfeld);

	while (isGameActive) {
		int x = 0;
		int y = 0;
		cout << endl << "--- " << spielerListe[werIstDran % 2] << " ---";
		cout << endl << "Position X :";
		cin >> x;
		cout << endl << "Position Y :";
		cin >> y;
		if (werIstDran % 2 == 0) {
			spielzug(spielfeld, symbolSpieler1, x, y);
		}
		else {
			spielzug(spielfeld, symbolSpieler2, x, y);
		}

		char gewinner = pruefeGewinn(spielfeld, symbolSpieler1, symbolSpieler2);
		if (gewinner != ' ') {
			if (gewinner == symbolSpieler1) {
				cout << endl << "Gewinner: " << spielerListe[0];
			}
			else {
				cout << endl << "Gewinner: " << spielerListe[1];
			}
			isGameActive = false;
		}
		else {
			werIstDran++;
			spielfeldAnzeigen(spielfeld);
		}
	}

	return 0;
}

void spielfeldFuellen(char spielfeld[5][8]) {
	for (int i = 0; i < 5;i++) {
		for (int j = 0; j < 8;j++) {
			spielfeld[i][j] = ' ';
		}

	}
}


void spielfeldAnzeigen(char spielfeld[5][8]) {
	for (int i = 0; i < 5;i++) {
		cout << '|';
		for (int j = 0; j < 8;j++) {
			cout << spielfeld[i][j] << '|';
		}
		cout << endl;
	}
}

void spielzug(char spielfeld[5][8], char symbol, int x, int y) {
	if (x < 5 && x >= 0 && y < 8 && y >= 0 && !istBelegt(spielfeld, x, y)) {
		spielfeld[x][y] = symbol;
	}
	else {
		cout << endl << "Fehlerhafte Eingabe" << endl;
	}
}

bool istBelegt(char spielfeld[5][8], int x, int y) {
	if (spielfeld[x][y] == ' ') {
		return false;
	}
	else {
		return true;
	}
}


char pruefeGewinn(char spielfeld[5][8], char spieler1, char spieler2) {
	char result1 = dominantX(spielfeld, spieler1, spieler2);
	if (result1 != ' ') {
		return result1;
	}
	char result2 = dominantY(spielfeld, spieler1, spieler2);
	if (result2 != ' ') {
		return result2;
	}
	char result3 = diagonalA(spielfeld, spieler1, spieler2);
	if (result3 != ' ') {
		return result3;
	}
	
	return ' ';
}


char dominantX(char spielfeld[5][8], char spieler1, char spieler2) {
	for (int i = 0; i < 5;i++) {

		int freiesFeld = 0;
		int felderSpieler1 = 0;
		int felderSpieler2 = 0;

		for (int j = 0; j < 8;j++) {
			if (spielfeld[i][j] == ' ') {
				freiesFeld++;
			}
			else if (spielfeld[i][j] == spieler1) {
				felderSpieler1++;
			}
			else {
				felderSpieler2++;
			}
		}
		if (felderSpieler1 >= 4) {
			return spieler1;
		}
		else if (felderSpieler2 >= 4) {
			return spieler2;
		}
	}
	return ' ';
}

char dominantY(char spielfeld[5][8], char spieler1, char spieler2) {
	for (int i = 0; i < 8;i++) {

		int freiesFeld = 0;
		int felderSpieler1 = 0;
		int felderSpieler2 = 0;

		for (int j = 0; j < 5;j++) {
			if (spielfeld[j][i] == ' ') {
				freiesFeld++;
			}
			else if (spielfeld[j][i] == spieler1) {
				felderSpieler1++;
			}
			else {
				felderSpieler2++;
			}
		}
		if (felderSpieler1 >= 4) {
			return spieler1;
		}
		else if (felderSpieler2 >= 4) {
			return spieler2;
		}
	}
	return ' ';
}


char diagonalA(char spielfeld[5][8], char spieler1, char spieler2) {
	int felderSpieler1 = 0;
	int felderSpieler2 = 0;
	for (int i = 0; i < 5;i++) {
		
		for (int k = 7; k >= 0;k--) {
			if (spielfeld[i][k] == spieler1) {
				felderSpieler1++;
			}
			else if (spielfeld[i][k] == spieler2) {
				felderSpieler2++;
			}
			if (felderSpieler1 >= 4) {
				return spieler1;
			}
			else if (felderSpieler2 >= 4) {
				return spieler2;
			}
		}
	}
	return ' ';
}