#include <iostream>
#define first(L) L.first
#define next(P) P->next
#define info(P) P->info

using namespace std;
typedef int infoType;
typedef struct elmlist *address;

struct elmlist {
    infoType info;
    address next;
};

struct List {
    address first;
};

// Procedure and function declarations
void createList(List &L);
address allocate(infoType x);

void insertFirst(List &L, address P);
void insertLast(List &L, address P);
void insertAfter(List &L, address Prec, address P);
void deleteLast(List &L);
void deleteAfter(List &L, address Prec);
bool searchInfo(List L, infoType x);
void printInfo(List L);
