#include<iostream>

using namespace std;

int main()
{
	double d_betrag = 0.0;
	char c_waehrung = ' ';
	char c_weiterenBetragUmrechnen = 'n';

	cout << "---Waehrungsumrechner (Euro -> ?)---\n\n"
		"Moegliche Eingaben fuer Zielwaehrungen: \n"
		"a: Umrechnung in Australische Dollar\n"
		"d: Umrechnung in US-Dollar\n"
		"p: Umrechnung in Britische Pfund\n"
		"r: Umrechnung in Russische Rubel\n"
		"y: Umrechnung in Yen\n"
		;

	do
	{
		if (c_weiterenBetragUmrechnen == 'j' || c_weiterenBetragUmrechnen == 'J')
		{
			c_weiterenBetragUmrechnen = 'n';
			cout << "\nUmrechnung eines weiteren Betrages.";
		}

		cout << "\nUmzurechnender Betrag (in EUR): ";
		cin >> d_betrag;
		cout << "Zielwaehrung: ";
		cin >> c_waehrung;
		c_waehrung = tolower(c_waehrung);
		switch (c_waehrung)
		{
		case 'a':
			cout << (d_betrag*1.62) << " AUD" << endl;
			break;
		case 'd':
			cout << (d_betrag*1.11) << " USD" << endl;
			break;
		case 'p':
			cout << (d_betrag*0.86)  << " Britische Pfund" << endl;
			break;
		case 'r':
			cout << (d_betrag*71.09)  << " Russische Rubel" << endl;
			break;
		case 'y':
			cout << (d_betrag*120.76)  << " Japanische Yen" << endl;
			break;
		
		}


		cout << "\nBetaetigen Sie die Taste 'j', wenn ein weiterer Betrag umgerechnet werden soll: ";
		cin >> c_weiterenBetragUmrechnen;
		
	} while (c_weiterenBetragUmrechnen == 'j' || c_weiterenBetragUmrechnen == 'J');

	return 0;
}