#include <iostream>
#define first(L) L.first
#define next(P) P -> next
#define info(P) p -> info

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

void createList(List &L){
  first(L) = NULL;
}

address allocate(infoType x) {
  address p = new elmlist;
  info(p) = x;
  next(p) = NULL;

  return p;
}

