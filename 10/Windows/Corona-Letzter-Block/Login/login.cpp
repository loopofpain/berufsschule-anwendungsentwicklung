#include <iostream>
#include <string>	//Bibliothek für die Nutzung von Strings.

using namespace std;

//--------------------------------------

//Prototypen
string holepasswort();
bool login(string);

int main()
{
	while (true)
	{
		if (login(holepasswort()))
		{
			cout << endl << "Sie sind nun angemeldet." << endl; //Zugriff auf die Konsole des Parkscheinautomaten wird gewährt.
			system("pause");
			return 0;
		}
		else
		{
			cout << endl << "Fehler!" << endl; //Fehlerausgabe nach Eingabe des falschen Passworts.
		}
		system("pause");
		system("cls");
	}
}

string holepasswort()
{
	return "geheim";
}


bool login(string str_Passwort)
{
	static int versuche = 0;
	string eingabePasswort;

	if (versuche < 3) {
		cout << "Passwort: ";
		cin >> eingabePasswort;

		if (eingabePasswort == str_Passwort) {
			versuche = 0;
			return true;
		}
		else {
			versuche++;
			return false;
		}
	}
	else {
		cout << "Bitte melden Sie sich bei einem Admin.";
	}



	//TODO
	return true;

}


