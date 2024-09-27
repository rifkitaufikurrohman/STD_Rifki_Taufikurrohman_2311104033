#include <iostream>
using namespace std;

int main() {
    string satuan[] = {"", "satu", "dua", "tiga", "empat", "lima",
    "enam", "tujuh", "delapan", "sembilan"};

    string belasan[] = {"", "sebelas", "dua belas", "tiga belas", "empat belas", "lima belas",
    "enam belas", "tujuh belas", "delapan belas", "sembilan belas"};

    string puluhan[] = {"", "sepuluh", "dua puluh", "tiga puluh", "empat puluh", "lima puluh",
    "enam puluh", "tujuh puluh", "delapan puluh", "sembilan puluh"};

    int angka;
    cout << "Masukkan angka (0 - 100): ";
    cin >> angka;

    if (angka < 0 || angka > 100) {
        cout << "Angka melebihi batas" << endl;
    }

    else if (angka == 0) {
        cout << angka << " : nol" << endl;
    } else if (angka == 100) {
        cout << angka << " : seratus" << endl;
    } else if (angka < 10) {
        cout << angka <<" : " << satuan[angka] << endl;
    } else if (angka < 20) {
        if (angka == 10) {
            cout << angka << " : sepuluh" << endl;
        } else {
            cout << angka << " : " << belasan[angka - 10] << endl;
        }
    } else if (angka < 100) {
        std::cout << angka << " : " << puluhan[angka / 10];
        if (angka % 10 != 0) {
            std::cout << " " << satuan[angka % 10];
        }
        std::cout << std::endl;
    }

    return 0;

} 
