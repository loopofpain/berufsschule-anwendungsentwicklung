#include <iostream>

using namespace std;

int main() {
    unsigned int i_kandidat_1 = 77;
    unsigned int i_kandidat_2 = 95;
    float f_anteil_kandidat_1 = ((float) i_kandidat_1 * 100) / ((float)i_kandidat_1 + (float)i_kandidat_2);
    float f_anteil_kandidat_2 = ((float) i_kandidat_2 * 100) / ((float)i_kandidat_1 + (float)i_kandidat_2);
    cout << "Kandidat 1: " << f_anteil_kandidat_1 << endl;
    cout << "Kandidat 2: " << f_anteil_kandidat_2 << endl;
    getchar();
}