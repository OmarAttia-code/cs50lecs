#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() { // constructor
        head = nullptr;
    }
     ~LinkedList() {// destructor free memory
    while (head != nullptr) {
        deleteFirst();
    }
}

    void insertFirst(int val) {
        Node* newNode = new Node{val, nullptr};
        
        if (head == nullptr) {
            head = newNode;
            return;
        }
        
        newNode->next = head;
        head = newNode;
    }
   

    void insertLast(int val) {
        Node* newNode = new Node{val, nullptr};
        
        if (head == nullptr) {
            head = newNode;
            return;
        }
        
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void insertMiddle(int val, int pos) {
        if (pos <= 0) {
            insertFirst(val);
            return;
        }
        
        Node* newNode = new Node{val, nullptr};
        Node* temp = head;
        
        
        for (int i = 0; i < pos - 1/*to correctly link and insert use -1pos*/ && temp != nullptr; i++) {
            temp = temp->next;
        }
        
        if (temp == nullptr) {
            insertLast(val);
            return;
        }
        
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void deleteFirst() {
        if (head == nullptr) {
            return;
        }
        
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    void deleteLast() {
        if (head == nullptr) {
            return;
        }
        
        if (head->next == nullptr) {
            delete head;
            head = nullptr;
            return;
        }
        
        Node* temp = head;
        while (temp->next->next != nullptr) {
            temp = temp->next;
        }
        
        delete temp->next;
        temp->next = nullptr;
    }

    void deleteMiddle(int pos) {
        if (head == nullptr) {
            return;
        }
        
        if (pos <= 0) {
            deleteFirst();
            return;
        }
        
        Node* temp = head;
        
        for (int i = 0; i < pos - 1 && temp != nullptr && temp->next != nullptr; i++) {
            temp = temp->next;
        }
        
        if (temp == nullptr || temp->next == nullptr) {
            return;
        }
        
        Node* nodeToDelete = temp->next;
        temp->next = temp->next->next;
        delete nodeToDelete;
    }

    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    LinkedList list;

    list.insertFirst(10);
    list.insertLast(30);
    list.insertMiddle(20, 1);
    list.insertLast(40);
    
    list.display();

    list.deleteMiddle(1);
    list.display();

    list.deleteFirst();
    list.display();

    list.deleteLast();
    list.display();

    list.deleteLast();
    list.display();

    return 0;
}