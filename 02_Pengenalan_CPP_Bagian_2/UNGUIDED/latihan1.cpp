#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Masukkan angka : ";
    cin >> number;

    int arr[number];

    for( int i = 0; i < number; i++ ) {
        arr[i] = i + 1;
    }

    cout << "Data Array : ";
    for (int i = 0; i < number; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    cout << "Nomor Genap : ";
    for (int i = 0; i < number; i++) {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << ", ";
        }
    }
    cout << endl;

    cout << "Nomor Genap : ";
    for (int i = 0; i < number; i++) {
        if (arr[i] % 2 != 0) {
            cout << arr[i] << ", ";
        }
    }
    cout << endl;

    return 0;
}