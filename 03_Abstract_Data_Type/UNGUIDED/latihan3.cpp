#include <iostream>
using namespace std;

void tampilArray2D(int arr[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void tukarArray2D(int arr1[3][3], int arr2[3][3], int i, int j) {
    int temp = arr1[i][j];
    arr1[i][j] = arr2[i][j];
    arr2[i][j] = temp;
}

void tukarPointer(int* p1, int* p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    int arr1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    int arr2[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    cout << "Array 1 sebelum pertukaran: " << endl;
    tampilArray2D(arr1);
    
    cout << "Array 2 sebelum pertukaran: " << endl;
    tampilArray2D(arr2);

    tukarArray2D(arr1, arr2, 1, 1);

    cout << "Array 1 setelah pertukaran elemen di posisi [1][1]: " << endl;
    tampilArray2D(arr1);
    
    cout << "Array 2 setelah pertukaran elemen di posisi [1][1]: " << endl;
    tampilArray2D(arr2);

    int a = 100;
    int b = 200;
    int* ptr1 = &a;
    int* ptr2 = &b;

    cout << "Sebelum pertukaran pointer: " << endl;
    cout << "Nilai yang ditunjuk ptr1: " << *ptr1 << endl;
    cout << "Nilai yang ditunjuk ptr2: " << *ptr2 << endl;

    tukarPointer(ptr1, ptr2);
    cout << endl;
    cout << "Setelah pertukaran pointer: " << endl;
    cout << "Nilai yang ditunjuk ptr1: " << *ptr1 << endl;
    cout << "Nilai yang ditunjuk ptr2: " << *ptr2 << endl;

    return 0;
}
