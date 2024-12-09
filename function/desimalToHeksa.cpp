#include <iostream>
using namespace std;

void desimalToHexa() {
    int iterasi = 0;
    int hasilKonvert[iterasi] = {};
    int sisa = 0;
    int basis= 16;
    int desimal;
    cin >> desimal;

    do {
        if(desimal < basis) {
            hasilKonvert[iterasi] = desimal;
            break;
        } else {
            sisa = desimal % basis;
            desimal /= basis;
            hasilKonvert[iterasi] = sisa;
        }
        iterasi++;
    } while(true);

    for (int i = iterasi; i >= 0; i--) {
        cout << hasilKonvert[i];
    }
}