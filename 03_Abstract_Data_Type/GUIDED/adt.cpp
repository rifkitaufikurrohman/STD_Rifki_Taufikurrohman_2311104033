#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct Mahasiswa {
    char nama[10];
    int nilai1, nilai2;
};

void inputMhs(Mahasiswa &m) {
    cout << "Input Nama = ";
    cin >> m.nama;
    cout << "Input Nilai 1 = ";
    cin >> m.nilai1;
    cout << "Input Nilai 2 = ";
    cin >> m.nilai2;
}

float rata2(Mahasiswa m) {
    return ( m.nilai1 + m.nilai2 ) / 2;
}

int main() {
    Mahasiswa mhs;
    inputMhs(mhs);
    cout <<"Nama : " << mhs.nama << " rata-rata = " << rata2(mhs);
    return 0;
}

