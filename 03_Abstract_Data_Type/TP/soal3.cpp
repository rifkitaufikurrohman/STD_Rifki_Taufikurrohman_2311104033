#include <iostream>
using namespace std;

int main() {
    int x = 22;
    int y = 12;

    int *ptr1 = nullptr;
    ptr1 = &x;

    int *ptr2 = &y;

    cout << "Alamat memori x : " << &x << endl;
    cout << "Alamat memori y : " << &y << endl;
    cout << "==============================" << endl;
    cout << "nilai dari variabel ptr1 : " << ptr1 << endl; // Akan menyimpan alamat dari variabel X
    cout << "nilai pointer dari variabel ptr1 : " << *ptr1 << endl; // Mengeluarkan nilai dari variabel X
    cout << "==============================" << endl;
    cout << "nilai dari variabel ptr2 : " << ptr2 << endl; // Akan menyimpan alamat dari variabel Y
    cout << "nilai pointer dari variabel ptr2 : " << *ptr2 << endl; // Mengeluarkan nilai dari variabel Y
}