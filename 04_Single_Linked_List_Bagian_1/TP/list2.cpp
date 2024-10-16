#include "list2.h"
using namespace std;

void createList(List &L) {
    first(L) = NULL;
}

address allocate(infoType x) {
    address p = new elmlist;
    info(p) = x;
    next(p) = NULL;
    return p;
}

void insertFirst(List &L, address P) {
    next(P) = first(L);
    first(L) = P;
}

void insertLast(List &L, address P) {
    if (first(L) == NULL) {
        first(L) = P;
    } else {
        address temp = first(L);
        while (next(temp) != NULL) {
            temp = next(temp);
        }
        next(temp) = P;
    }
}

void insertAfter(List &L, address Prec, address P) {
    if (Prec != NULL) {
        next(P) = next(Prec);
        next(Prec) = P;
    }
}

void deleteLast(List &L) {
    if (first(L) != NULL) {
        address temp = first(L);
        if (next(temp) == NULL) {
            first(L) = NULL;
            delete temp;
        } else {
            address prev = NULL;
            while (next(temp) != NULL) {
                prev = temp;
                temp = next(temp);
            }
            next(prev) = NULL;
            delete temp;
        }
    }
}

void deleteAfter(List &L, address Prec) {
    if (Prec != NULL && next(Prec) != NULL) {
        address temp = next(Prec);
        next(Prec) = next(temp);
        delete temp;
    }
}

bool searchInfo(List L, infoType x) {
    address temp = first(L);
    while (temp != NULL) {
        if (info(temp) == x) {
            return true;
        }
        temp = next(temp);
    }
    return false;
}

void printInfo(List L) {
    address p = first(L);
    while (p != NULL) {
        cout << info(p);
        p = next(p);
    }
    cout << endl;
}

int main() {
    List L;
    createList(L);

    int totalDigits = 10;
    infoType nimDigit;

    cout << "Masukkan NIM perdigit:" << endl;
    
    for (int i = 1; i <= totalDigits; ++i) {
        cout << "Digit " << i << " : ";
        cin >> nimDigit;

        address P = allocate(nimDigit);
        insertLast(L, P);
    }

    cout << "Isi list: ";
    printInfo(L);

    return 0;
}