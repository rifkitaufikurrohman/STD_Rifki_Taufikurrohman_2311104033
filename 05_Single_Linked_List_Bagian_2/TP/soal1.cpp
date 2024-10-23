#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Function to insert a node at the end
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

// Function to search for an element and print its address and position
void searchElement(Node* head, int value) {
    Node* temp = head;
    int position = 1;
    bool found = false;

    while (temp != nullptr) {
        if (temp->data == value) {
            cout << "Elemen ditemukan pada urutan ke-" << position << endl;
            cout << "Alamat elemen: " << temp << endl;
            found = true;
            break;
        }
        temp = temp->next;
        position++;
    }

    if (!found) {
        cout << "Elemen " << value << " tidak ada dalam list." << endl;
    }
}

int main() {
    Node* head = nullptr;
    int value;

    // Input 6 elements into the list
    cout << "Masukkan 6 elemen integer ke dalam list: " << endl;
    for (int i = 0; i < 6; i++) {
        int element;
        cout << "Elemen ke-" << (i + 1) << ": ";
        cin >> element;
        insertLast(head, element);
    }

    // Input the value to search
    cout << "Masukkan nilai yang ingin dicari: ";
    cin >> value;

    // Search for the element in the list
    searchElement(head, value);

    return 0;
}
