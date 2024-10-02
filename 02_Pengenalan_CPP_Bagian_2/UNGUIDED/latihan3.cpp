#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    int arr[n];

    cout << "Masukkan elemen array:\n";
    for (int i = 0; i < n; i++) {
        cout << "Elemen " << i + 1 << ": ";
        cin >> arr[i];
    }

    int pilihan;
    do {
        cout << "\nMENU:\n";
        cout << "1. Cari Nilai Maksimum\n";
        cout << "2. Cari Nilai Minimum\n";
        cout << "3. Cari Nilai Rata-rata\n";
        cout << "4. Keluar\n";
        cout << "Pilih opsi (1-4): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: {
                int maks = arr[0];
                for (int i = 1; i < n; i++) {
                    if (arr[i] > maks) {
                        maks = arr[i];
                    }
                }
                cout << "Nilai Maksimum: " << maks << endl;
                break;
            }
            case 2: {
                int min = arr[0];
                for (int i = 1; i < n; i++) {
                    if (arr[i] < min) {
                        min = arr[i];
                    }
                }
                cout << "Nilai Minimum: " << min << endl;
                break;
            }
            case 3: {
                double jumlah = 0;
                for (int i = 0; i < n; i++) {
                    jumlah += arr[i];
                }
                double rata2 = jumlah / n;
                cout << "Nilai Rata-rata: " << rata2 << endl;
                break;
            }
            case 4: {
                cout << "Keluar dari program.\n";
                break;
            }
            default: {
                cout << "Pilihan tidak valid. Silakan pilih lagi.\n";
                break;
            }
        }
    } while (pilihan != 4);

    return 0;
}
