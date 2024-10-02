#include <iostream>
using namespace std;

int main() {
    int dimensi1, dimensi2, dimensi3;

    cout << "Masukkan ukuran dimensi 1: ";
    cin >> dimensi1;
    cout << "Masukkan ukuran dimensi 2: ";
    cin >> dimensi2;
    cout << "Masukkan ukuran dimensi 3: ";
    cin >> dimensi3;

    int ***array3D = new int**[dimensi1];
    for (int i = 0; i < dimensi1; i++) {
        array3D[i] = new int*[dimensi2];
        for (int j = 0; j < dimensi2; j++) {
            array3D[i][j] = new int[dimensi3];
        }
    }

    cout << "Masukkan nilai untuk setiap elemen array:\n";
    for (int i = 0; i < dimensi1; i++) {
        for (int j = 0; j < dimensi2; j++) {
            for (int k = 0; k < dimensi3; k++) {
                cout << "array[" << i << "][" << j << "][" << k << "]: ";
                cin >> array3D[i][j][k];
            }
        }
    }

    cout << "\nNilai elemen array:\n";
    for (int i = 0; i < dimensi1; i++) {
        for (int j = 0; j < dimensi2; j++) {
            for (int k = 0; k < dimensi3; k++) {
                cout << "array[" << i << "][" << j << "][" << k << "] = "
                    << array3D[i][j][k] << endl;
            }
        }
    }

    // Membebaskan memori yang dialokasikan secara dinamis
    for (int i = 0; i < dimensi1; i++) {
        for (int j = 0; j < dimensi2; j++) {
            delete[] array3D[i][j];
        }
        delete[] array3D[i];
    }
    delete[] array3D;
    return 0;
}
