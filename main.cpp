#include <iostream>
#include <cmath>
using namespace std;

void desimalToBiner(int desimal){
    int iterasi = 0;
    int hasilKonvert[iterasi] = {};
    int sisa = 0;
    int basis = 2;

    do
    {
        if (desimal < basis)
        {
            hasilKonvert[iterasi] = desimal;
            break;
        }
        else
        {
            sisa = desimal % basis;
            desimal /= basis;
            hasilKonvert[iterasi] = sisa;
        }
        iterasi++;
    } while (true);

    for (int i = iterasi; i >= 0; i--)
    {
        cout << hasilKonvert[i];
    }
}

void desimalToHeksa(int desimal) {
    int iterasi = 0;
    int hasilKonvert[iterasi] = {};
    int sisa = 0;
    int basis= 16;

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

void desimalToOktal(int desimal) {
    int iterasi = 0;
    int hasilKonvert[iterasi] = {};
    int sisa = 0;
    int basis= 8;

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

void binerToHeksa(int biner)
{
    int hexa = 0, i = 0, sisa;
    while (biner != 0)
    {
        sisa = biner % 10;
        hexa = hexa + sisa * pow(2, i);
        biner = biner / 10;
        i++;
    }

    desimalToHeksa(hexa);

}

void binerToDesimal(int biner) {
    int desimal = 0, i = 0, sisa;
    while (biner != 0) {
        sisa = biner % 10;
        desimal = desimal + sisa * pow(2, i);
        biner = biner / 10;
        i++;
    }

    std::cout << desimal;
}


int main() {
    int pilihan;
    int convert;
    cout << "Masukkan pilihan konverter: " << endl;
    cout << "1. Desimal ke Oktal\n";
    cout << "2. Desimal ke Biner\n";
    cout << "3. Desimal ke Heksadesimal\n";
    cout << "4. Biner ke Desimal\n";
    cout << "5. Biner ke Hexa\n";
    cout << "0. Keluar\n";
    cin >> pilihan;


    
    while (pilihan != 0)
    {
        switch (pilihan)
        {
        case 1:
            cin >> convert;
            desimalToOktal(convert);
            break;
        case 2:
            cin >> convert;
            desimalToBiner(convert);
            break;
        case 3:
            cin >> convert;
            desimalToHeksa(convert);
            break;
        break;
        case 4:
            cout << "Masukkan bilangan biner : ";
            cin >> convert;
            binerToDesimal(convert);
            break;
        case 5:
            cout << "Masukkan bilangan biner : ";
            cin >> convert;
            binerToHeksa(convert);
            break;
        default:
            break;
    }
    }
}