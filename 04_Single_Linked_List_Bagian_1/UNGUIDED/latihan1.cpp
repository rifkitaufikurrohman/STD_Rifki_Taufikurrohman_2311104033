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

void insertNodeBelakang(Node** head, int nilai) {
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

void cetakLinkedList(Node* head) {
  Node* temp = head;
  while (temp != nullptr) {
    cout << temp ->info;
    if (temp -> next != nullptr) {
      cout << "->";
    }
    temp = temp -> next;
  }
  cout << endl;
}

int main() {
  Node* head = nullptr;

  insertNodeDepan(&head, 10);
  insertNodeBelakang(&head, 20);
  insertNodeDepan(&head, 5);

  cout << "Output dari linked list: " << endl;
  cetakLinkedList(head);
}
