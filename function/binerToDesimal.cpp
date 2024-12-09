#include <iostream>
#include <cmath>
void binerToDesimal() {
    int biner, desimal = 0, i = 0, sisa;
    std::cout << "Masukkan bilangan biner : ";
    std::cin >> biner;
    while (biner != 0) {
        sisa = biner % 10;
        desimal = desimal + sisa * pow(2, i);
        biner = biner / 10;
        i++;
    }
    std::cout << desimal;
}