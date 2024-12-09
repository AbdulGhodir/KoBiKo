#include <iostream>
#include "function/define.h"
using namespace std;
int main() {
    int pilihan;
    cout << "Masukkan pilihan konverter: " << endl;
    cout << "1. Desimal ke Oktal\n";
    cout << "2. Desimal ke Biner\n";
    cout << "3. Desimal ke Heksadesimal\n";
    cout << "0. Keluar\n";
    cin >> pilihan;


    
    while (pilihan != 0)
    {
        switch (pilihan)
        {
        case 1:
            desimalToOktal();
            break;
        case 2:
            desimalToBiner();
            break;
        case 3:
            desimalToHexa();
            break;
        break;
    }
    }
}