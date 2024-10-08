#include <iostream>

using namespace std;

struct Pelajaran {
    string namaMapel;
    string kodeMapel;
};

void createPelajaran(string& namaMapel, string& kodeMapel, Pelajaran& pel) {
    pel.namaMapel = namaMapel;
    pel.kodeMapel = kodeMapel;
}

void tampilPelajaran(Pelajaran& pel) {
    cout << "Nama Pelajaran : " << pel.namaMapel << endl;
    cout << "Kode Pelajaran : " << pel.kodeMapel << endl;
}

int main() {
    string namaPel = "Struktur Data";
    string kodePel = "STD";

    Pelajaran pel;
    createPelajaran(namaPel, kodePel, pel);

    tampilPelajaran(pel);

    return 0;
}