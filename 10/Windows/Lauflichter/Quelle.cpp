#include <iostream>
#include <stdlib.h>
#include <windows.h>

using namespace std;

void displayArray(int values[5][50]);
void move(int* values);

int text[5][50] = {
						{ 1,0, 0, 1, 0, 0, 0, 0, 1, 0,0,0, 0, 1, 0, 0, 1, 0, 0, 1,1,1, 1, 0, 0, 0, 0, 0, 0, 0,0,0, 0, 0, 0, 0, 0, 0, 0, 0,0,0, 0, 0, 0, 0, 0, 0, 0, 0 } ,
						{ 1,0, 0, 1, 0, 0, 0, 1, 0, 1,0,0, 0, 1, 0, 0, 1, 0, 0, 1,0,0, 1, 0, 0, 0, 0, 0, 0, 0,0,0, 0, 0, 0, 0, 0, 0, 0, 0,0,0, 0, 0, 0, 0, 0, 0, 0, 0 } ,
						{ 1,1, 1, 1, 0, 0, 1, 1, 1, 1,1,0, 0, 1, 0, 0, 1, 0, 0, 1,0,0, 1, 0, 0, 0, 0, 0, 0, 0,0,0, 0, 0, 0, 0, 0, 0, 0, 0,0,0, 0, 0, 0, 0, 0, 0, 0, 0 } ,
						{ 1,0, 0, 1, 0, 1, 0, 0, 0, 0,0,1, 0, 1, 0, 0, 1, 0, 0, 1,0,0, 1, 0, 0, 0, 0, 0, 0, 0,0,0, 0, 0, 0, 0, 0, 0, 0, 0,0,0, 0, 0, 0, 0, 0, 0, 0, 0 } ,
						{ 1,0, 0, 1, 1, 0, 0, 0, 0, 0,0,0, 1, 1, 1, 1, 1, 1, 1, 1,1,1, 1, 0, 0, 0, 0, 0, 0, 0,0,0, 0, 0, 0, 0, 0, 0, 0, 0,0,0, 0, 0, 0, 0, 0, 0, 0, 0 }
};

void main() {
	while (true) {
		for (int i = 0; i < 5;i++) {
			move(text[i]);
		}
		displayArray(text);
		system("cls");
	}
}


void move(int* values)
{
	for (int i = 0; i < 49;i++) {
		int nxt = (i + 1) % 50;
		int temp = values[nxt];
		values[nxt] = values[i];
		values[i] = temp;
	}
	//int temp = values[1];
	//values[1] = values[0];
	//values[0] = temp;
}
void displayArray(int values[5][50])
{
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	for (int i = 0; i < 5;i++) {
		for (int j = 0; j < 50;j++) {

			if (values[i][j] == 1) {
				SetConsoleTextAttribute(consoleHandle, 4);
				cout << values[i][j];
				SetConsoleTextAttribute(consoleHandle, 6);
			}
			else {
				cout << values[i][j];
			}

			
		}
		cout << endl;
	}
}



