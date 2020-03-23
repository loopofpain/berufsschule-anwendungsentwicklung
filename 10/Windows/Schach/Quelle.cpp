#include <iostream>

using namespace std;

char** setup();
void print(char** values);
void setupWithFigures(char** values);

char schwarz = 'S';
char weiss = 'W';

char figures[2][8] = { { 'T','P','L','K','D','L','P','T' }, { 'B','B','B','B','B','B','B','B' } };

void main() {
	char** board = setup();
	
	setupWithFigures(board);
	print(board);
}

void print(char** values) {
	for (int i = 0; i < 8;i++) {
		for (int j = 0; j < 8;j++) {

			cout << values[i][j];


		}
		cout << endl;
	}
}

char** setup() {
	char** array = 0;
	array = new char* [8];
	for (int i = 0; i < 8;i++) {
		array[i] = new char[8];
		if (i % 2 == 0) {
			for (int j = 0; j < 8;j++) {
				if (j % 2 == 0) {
					array[i][j] = weiss;
				}
				else {
					array[i][j] = schwarz;
				}
			}
		}
		else {
			for (int j = 0; j < 8;j++) {
				if (j % 2 == 0) {
					array[i][j] = schwarz;
				}
				else {
					array[i][j] = weiss;
				}
			}
		}
	}
	return array;
}

void setupWithFigures(char** values) {

	for (int i = 0; i < 2;i++) {
		for (int j = 0; j < 8;j++) {

			values[i][j] = figures[i][j];

		}

	}

	for (int j = 0; j < 8;j++) {

		values[6][j] = figures[1][j];

	}

	for (int j = 0; j < 8;j++) {

		values[7][j] = figures[0][j];

	}
	

}
