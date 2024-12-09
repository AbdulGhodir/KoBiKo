#include <iostream>
#include <cmath>
void binerToHexa() {
    int biner, hexa = 0, i = 0, sisa;
    std::cout << "Masukkan bilangan biner : ";
    std::cin >> biner;
    while (biner != 0) {
        sisa = biner % 10;
        hexa = hexa + sisa * pow(2, i);
        biner = biner / 10;
        i++;
    }
    std::cout << hexa;
}