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
    cout << endl << endl;
    cin.get();


}

void desimalToHeksa(int desimal) {
    int iterasi = 0;
    int hasilKonvert[iterasi] = {};
    int sisa = 0;
    int basis= 16;
    char HEXADESIMAL[6] = {'A','B','C','D','E','F'};

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
        if(hasilKonvert[i] > 9) {
            cout << HEXADESIMAL[hasilKonvert[i] - 10];
            continue;
        }   
    }
    cout << endl << endl;
    cin.get();

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
    cout << endl << endl;
    cin.get();


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
    cin.get();

}

void binerToDesimal(int biner) {
    int desimal = 0, i = 0, sisa;
    while (biner != 0) {
        sisa = biner % 10;
        desimal = desimal + sisa * pow(2, i);
        biner = biner / 10;
        i++;
    }

    cout << desimal;
    cout << endl << endl;
    cin.get();

}

void binerToOktal(int biner) {
    int desimal = 0, i = 0, sisa;
    while (biner != 0) {
        sisa = biner % 10;
        desimal = desimal + sisa * pow(2, i);
        biner = biner / 10;
        i++;
    }
    desimalToOktal(desimal);
    cin.get();
}


int main() {
    int pilihan;
    int convert;


    
    while (pilihan != 0) {
        cout << "Masukkan pilihan konverter: " << endl;
        cout << "1. Desimal ke Oktal\n";
        cout << "2. Desimal ke Biner\n";
        cout << "3. Desimal ke Heksadesimal\n";
        cout << "4. Biner ke Desimal\n";
        cout << "5. Biner ke Hexa\n";
        cout << "6. Biner ke Oktal\n";
        cout << "0. Keluar\n";
        cin >> pilihan;

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
            cout << "Hasil konversi : ";
            binerToDesimal(convert);
            break;
        case 5:
            cout << "Masukkan bilangan biner : ";
            cin >> convert;
            cout << "Hasil konversi : ";
            binerToHeksa(convert);
            break;
        case 6:
            cout << "Masukkan bilangan biner : ";
            cin >> convert;
            cout << "Hasil konversi : ";
            binerToOktal(convert);
            break;
        default:
            break;
    }
    }
}