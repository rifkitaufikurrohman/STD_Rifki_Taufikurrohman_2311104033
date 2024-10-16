#include <iostream>
#include "list.h"

using namespace std;

void insertFirst(List &L, address P) {
  next(P) = first(L);
  first(L) = P;
}

void printInfo(List L) {
  address p = first(L);
  while (p != NULL) {
    cout << info(p) << ", ";
    p = next(p);
  }
  cout << endl;
}

int main() {
  List L;
    createList(L);

  for (int i = 0; i < 3; ++i) {
    infoType number;
    cout << "Masukkan angka ke-" << (i + 1) << ": "; 
    cin >> number;

    address P = allocate(number); 
    insertFirst(L, P); 

    cout << "List setelah menambahkan angka ke-" << (i + 1) << ": "; 
    printInfo(L); 
  }
}