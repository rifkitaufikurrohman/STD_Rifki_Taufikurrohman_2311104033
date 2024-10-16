#include <iostream>
using namespace std;

struct Node {
  int info;
  Node* next;
};

void insertNodeDepan(Node** head, int nilai) {
  Node* newNode = new Node();
  newNode -> info = nilai;
  newNode -> next = *head;
  *head = newNode;
}

void insertNodeBelakang(Node**head, int nilai) {
  Node* newNode = new Node();
  newNode -> info = nilai;
  newNode -> next = nullptr;

  if(*head == nullptr) {
    *head = newNode;
    return;
  }

  Node* temp = *head;
  while(temp -> next != nullptr) {
    temp = temp -> next;
  }
  temp -> next = newNode;
}

bool cariNode(Node* head, int nilai) {
  Node* temp = head;
  while(temp != nullptr) {
    if(temp -> info == nilai) {
      return true;
    }
    temp = temp -> next;
  }
  return false;
}

int hitungPanjang(Node* head) {
  int panjang = 0;
  Node* temp = head;
  while(temp != nullptr) {
    panjang++;
    temp = temp -> next;
  }
  return panjang;
}

int main() {
  Node* head = nullptr;

  insertNodeDepan(&head, 10);
  insertNodeBelakang(&head, 20);
  insertNodeDepan(&head, 5);
  
  cout << "Output : " << endl;
  int cariNilai = 20;
  if (cariNode(head, cariNilai)) {
      cout << "Node dengan nilai " << cariNilai << " ditemukan." << endl;
  } else {
      cout << "Node dengan nilai " << cariNilai << " tidak ditemukan." << endl;
  }

  int panjang = hitungPanjang(head);
  cout << "Panjang linked list: " << panjang << endl;
}