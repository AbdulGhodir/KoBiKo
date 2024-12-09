# KoBiKo
Konversi Bilangan Komputer

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