#include <iostream>
using namespace std;
int main() {
	cout << "Drehkreuzsteuerung" << endl; 
    cout << "------------------" << endl; 
    for(int i = 30; i>0; i--) {
        cout << "Noch " << i << " Plätze verfügbar" << endl;   
        cout << "Bitte einsteigen(mit Enter-Taste)" << endl; 
        getchar();
        cout << "Drehkreuz wurde betätigt" << endl;
    } 
    cout << "Bitte nicht mehr einsteigen, die Bahn ist voll" << endl;   
	return 0;
}
