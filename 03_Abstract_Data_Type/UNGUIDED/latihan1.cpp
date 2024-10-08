#include <iostream>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    float uts;
    float uas;
    float tugas;
    float nilaiAkhir;
};

float totalNilai( float uts, float uas, float tugas ) {
    return ( 0.3 * uts ) + ( 0.4 * uas ) + ( 0.3 * tugas );
}

void inputDataMhs(Mahasiswa mhs[], bool& tambahData, int& jumlahData) {
    char pilihan;

    while( tambahData && jumlahData < 10 ) {
        cout << "Masukkan nama : ";
        cin >> mhs[jumlahData].nama;

        cout << "Masukkan nim : ";
        cin >> mhs[jumlahData].nim;

        cout << "Masukkan nilai UTS : ";
        cin >> mhs[jumlahData].uts;

        cout << "Masukkan nilai UAS : ";
        cin >> mhs[jumlahData].uas;

        cout << "Masukkan tugas : ";
        cin >> mhs[jumlahData].tugas;

        mhs[jumlahData].nilaiAkhir = totalNilai(
            mhs[jumlahData].uts, mhs[jumlahData].uas, mhs[jumlahData].tugas
        );
        jumlahData++;

        if ( jumlahData < 10 ) {
            cout << "Tambah data mahasiswa ? ( y / t ) : ";
            cin >> pilihan;

            if (pilihan != 'y' && pilihan != 'Y') {
                tambahData = false;
            }
        } else {
            cout << "Data mahasiswa sudah ada 10.\n";
            tambahData = false;
        }
    }
}

void coutDataMhs( Mahasiswa mhs[],  int jumlahData) {
    for (int i = 0; i < jumlahData; i++) {
        cout << "Nama : " << mhs[i].nama << endl;
        cout << "Nim : " << mhs[i].nim << endl;
        cout << "Nilai UTS : " << mhs[i].uts << endl;
        cout << "Nilai UAS : " << mhs[i].uas << endl;
        cout << "Nilai Tugas : " << mhs[i].tugas << endl;
        cout << "Nilai akhir : " << mhs[i].nilaiAkhir << endl;
        cout << " " << endl;
        cout << "<====================>\n\n"; 
    }
}

int main() {
    int MAX_ARRAY = 10;
    Mahasiswa mhs[MAX_ARRAY];
    int jumlahData = 0;
    bool tambahData = true;

    inputDataMhs(mhs, tambahData, jumlahData);

    cout << "\nData Mahasiswa:\n";
    coutDataMhs(mhs, jumlahData);
    
    return 0;
}
