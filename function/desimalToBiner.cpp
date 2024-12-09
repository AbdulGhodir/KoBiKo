#include <iostream>
using namespace std;

void desimalToBiner() {
    int iterasi = 0;
    int hasilKonvert[iterasi] = {};
    int sisa = 0;
    int basis= 2;
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