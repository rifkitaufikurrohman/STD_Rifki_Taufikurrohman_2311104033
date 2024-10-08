#include <iostream>
using namespace std;

#include <stdio.h>

int main() {
    int a = 10;
    int *p;    // Deklarasi pointer yang bisa menyimpan alamat memori integer
    p = &a;    // Pointer 'p' menyimpan alamat memori variabel 'a'

    printf("Nilai a: %d\n", a);              // Output: 10
    printf("Alamat a: %p\n", (void*)&a);     // Output: Alamat memori 'a'
    printf("Nilai p (alamat a): %p\n", (void*)p);  // Output: Alamat yang disimpan dalam pointer 'p'
    printf("Nilai yang ditunjuk p: %d\n", *p);     // Output: Nilai yang ada di alamat yang ditunjuk pointer 'p' (yaitu nilai dari 'a', 10)

    return 0;
}


// int main() {
//     int a, b;

//     a = 29;
//     b = 33;

//     cout << "Alamat memori dari variabel a : " << &a << endl;
//     cout << "Alamat memori dari variabel b : " << &b << endl;
// }