#include <iostream>
#include "stack.h"
using namespace std;

// Inisialisasi stack kosong
void createStack(Stack &S) {
  S.top = -1;
}

// Menambahkan elemen ke stack
void push(Stack &S, infotype x) {
  if (S.top < MAX - 1) {
    S.top++;
    S.info[S.top] = x;
  } else {
    cout << "Stack penuh!" << endl;
  }
}

// Menghapus elemen dari stack
infotype pop(Stack &S) {
  if (S.top >= 0) {
    infotype temp = S.info[S.top];
    S.top--;
    return temp;
  } else {
    cout << "Stack kosong!" << endl;
    return -1;
  }
}

// Menampilkan elemen-elemen stack
void printInfo(const Stack &S) {
  if (S.top >= 0) {
    cout << "[TOP] ";
    for (int i = S.top; i >= 0; i--) {
      cout << S.info[i] << " ";
    }
    cout << endl;
  } else {
    cout << "Stack kosong!" << endl;
  }
}

// Membalikkan urutan elemen dalam stack
void balikStack(Stack &S) {
  Stack temp;
  createStack(temp);
  
  while (S.top >= 0) {
    push(temp, pop(S));
  }

  S = temp;
}

// Menambahkan elemen secara ascending
void pushAscending(Stack &S, infotype x) {
  Stack temp;
  createStack(temp);

  while (S.top >= 0 && S.info[S.top] > x) {
    push(temp, pop(S));
  }

  push(S, x);

  while (temp.top >= 0) {
    push(S, pop(temp));
  }
}

// Membaca input stream dan memasukkan ke dalam stack
void getInputStream(Stack &S) {
  cout << "Masukkan angka (tekan Enter untuk selesai): ";
  char input;
  while (cin.get(input) && input != '\n') {
    if (S.top < MAX - 1) {
      push(S, input - '0'); // Konversi karakter ke integer
    } else {
      cout << "Stack penuh!" << endl;
      break;
    }
  }
}
