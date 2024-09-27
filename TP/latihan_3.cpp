#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Masukkan angka: ";
    cin >> number;

    for (int i = number; i >= 1; i--) {

        for (int s = number - i; s > 0; s--) {
            cout << "  ";
        }

        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }

        cout << "* ";


        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        cout << endl;
    }


    for (int s = 0; s < number; s++) {
        cout << "  ";
    }
    cout << "*" << endl;

    return 0;
}
