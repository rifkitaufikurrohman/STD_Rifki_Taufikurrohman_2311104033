#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Function to insert a node at the end of the list
void insertLast(Node*& head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Function to display the list
void displayList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Bubble Sort function for the linked list
void bubbleSortList(Node* head) {
    if (head == nullptr) return;

    bool swapped;
    Node* current;
    Node* lastPtr = nullptr;

    do {
        swapped = false;
        current = head;

        while (current->next != lastPtr) {
            if (current->data > current->next->data) {
                // Swap data between current and current->next
                int temp = current->data;
                current->data = current->next->data;
                current->next->data = temp;
                swapped = true;
            }
            current = current->next;
        }
        lastPtr = current;
    } while (swapped);
}

int main() {
    Node* head = nullptr;

    // Input 5 elements into the list
    cout << "Masukkan 5 elemen integer ke dalam list: " << endl;
    for (int i = 0; i < 5; i++) {
        int element;
        cout << "Elemen ke-" << (i + 1) << ": ";
        cin >> element;
        insertLast(head, element);
    }

    // Display the list before sorting
    cout << "List sebelum diurutkan: ";
    displayList(head);

    // Sort the list using Bubble Sort
    bubbleSortList(head);

    // Display the sorted list
    cout << "List setelah diurutkan: ";
    displayList(head);

    return 0;
}
