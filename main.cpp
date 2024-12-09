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
        } else {
            cout << hasilKonvert[i];
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

int convertHeksa(char heksa) {
    char HEXADESIMAL[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    for (long int i = 0; i < 16; i++) {
        if (heksa == HEXADESIMAL[i]) {
            return i;
        }
    }

}


void HeksaToBiner(string heksa) {
    int iterasi = 0;
    int hasil = 0;
    int sisa = 0;
    int basis = 16;

    for (int i = heksa.length() - 1; i >= 0; i--) {
        sisa = convertHeksa(heksa[i]);
        hasil += sisa * pow(16, iterasi);
        iterasi++;
    }

    desimalToBiner(hasil);
    cout << endl << endl;
    
}

void HeksaToDesimal(string heksa) {
    int iterasi = 0;
    int hasil = 0;
    int sisa = 0;
    int basis = 16;

    for (int i = heksa.length() - 1; i >= 0; i--) {
        sisa = convertHeksa(heksa[i]);
        hasil += sisa * pow(16, iterasi);
        iterasi++;
    }

    cout << hasil;
    cout << endl << endl;
    
}

int oktalToDesimal(int oktal){
    int hasilKonvert = 0;
    int sisa = 0;
    int basisOktal = 8;
    int basisDesimal = 10;

    int pangkat = 0;
    while(oktal != 0){
        sisa = oktal % basisDesimal;
        hasilKonvert +=  sisa * pow(basisOktal, pangkat);
        oktal /= basisDesimal;
        pangkat++;
    }
    cin.get();

    return hasilKonvert;
}

void oktalToBiner(int oktal){
    int desimal = oktalToDesimal(oktal);
    desimalToBiner(desimal);
}

void oktalToHeksa(int oktal){
    int desimal = oktalToDesimal(oktal);
    desimalToHeksa(desimal);
}

int main() {
    int pilihan = 1;
    int convert;
    string heksa;
    
    while (pilihan != 0) {
        cout << "Masukkan pilihan konverter: " << endl;
        cout << "1. Desimal ke Oktal\n";
        cout << "2. Desimal ke Biner\n";
        cout << "3. Desimal ke Heksadesimal\n";
        cout << "4. Biner ke Desimal\n";
        cout << "5. Biner ke Hexa\n";
        cout << "6. Biner ke Oktal\n";
        cout << "7. Oktal ke Desimal\n";
        cout << "8. Oktal ke Biner\n";
        cout << "9. Oktal ke Heksa\n";
        cout << "10. Heksa ke Desimal\n";
        cout << "11. Heksa ke Biner\n";
        cout << "12. Heksa ke Oktal\n";
        cout << "0. Keluar\n";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            cout << "Masukkan bilangan desimal : ";
            cin >> convert;
            cout << "Hasil konversi : ";
            desimalToOktal(convert);
            break;
        case 2:
            cout << "Masukkan bilangan desimal : ";
            cin >> convert;
            cout << "Hasil konversi : ";
            desimalToBiner(convert);
            break;
        case 3:
            cout << "Masukkan bilangan desimal : ";
            cin >> convert;
            cout << "Hasil konversi : ";
            desimalToHeksa(convert);
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
        case 7:
            cout << "Masukkan bilangan oktal : ";
            cin >> convert;
            cout << "Hasil konversi : ";
            cout << oktalToDesimal(convert) << endl << endl;
            cin.get();
            break;
        case 8:
            cout << "Masukkan bilangan oktal : ";
            cin >> convert;
            cout << "Hasil konversi : ";
            oktalToBiner(convert);
            break;
        case 9:
            cout << "Masukkan bilangan oktal : ";
            cin >> convert;
            cout << "Hasil konversi : ";
            oktalToHeksa(convert);
            break;
        case 10:
            cout << "Masukkan bilangan heksadesimal : ";
            cin >> heksa;
            cout << "Hasil konversi : ";
            HeksaToDesimal(heksa);
            break;
        case 11:
            cout << "Masukkan bilangan heksadesimal : ";
            cin >> heksa;
            cout << "Hasil konversi : ";
            HeksaToBiner(heksa);
            break;
        case 12:
            cout << "Masukkan bilangan heksadesimal : ";
            cin >> heksa;
            cout << "Hasil konversi : ";
            // HeksaToOktal(heksa);
            break;
        default:
            break;
        }
    }
}