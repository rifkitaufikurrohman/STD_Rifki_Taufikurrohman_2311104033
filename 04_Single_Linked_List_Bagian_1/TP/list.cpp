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
  
}