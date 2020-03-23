#include <iostream>
using namespace std;
int main() {
    double operator1=0;
    double operator2=0;
    double ergebnis=0;
    char operation;
    
    cout << "1.Operator: ";
    cin >> operator1;

    cout << endl << "2.Operator: ";
    cin >> operator2;

    cout << endl << "Operation: ";
    cin >> operation;

    if(operation=='+'){
        ergebnis=operator1+operator2;
    }else if(operation=='-') {
        ergebnis=operator1-operator2;
    }else if(operation=='*') {
        ergebnis=operator1*operator2;
    }else if(operation=='/') {
        ergebnis=operator1/operator2;
    } else {
        cout << "Keine oder ungültige Operation";
    }

    cout << endl << "Ergebnis: " << ergebnis;

    return 0;
}