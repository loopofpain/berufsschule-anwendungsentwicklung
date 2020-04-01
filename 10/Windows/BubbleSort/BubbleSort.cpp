#include <iostream>
using namespace std;




int zahlen[10] = { 5,88,4,22,11,137,11,66,2,1 };


void sort(int* input, int arraylength);
void printArray(int* input, int arraylength);


void main() {
	cout << "Vorher" << endl;
	printArray(zahlen, 10);
	sort(zahlen, 10);
	cout << endl << "Nachher" << endl;
	printArray(zahlen, 10);
}


void sort(int* input, int arraylength) {
	for (int j = 0; j <= (arraylength - 1);j++) {
		for (int i = 0; i <= (arraylength - 2);i++) {
			if (input[i] >= input[i + 1]) {
				int temp = input[i];
				input[i] = input[i + 1];
				input[i + 1] = temp;
			}
		}
	}
}

void printArray(int* input, int arraylength) {
	cout << '|';
	for (int i = 0;i < arraylength;i++) {
		cout << input[i] << '|';
	}
}