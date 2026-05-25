#include <iostream>
using namespace std;

struct node {
    int studentID;  
    node* next;
};

node* createnode(int id) {
    node* p = new node;
    p->studentID = id;
    p->next = NULL;
    return p;
}

void insertHead(node* &Head, int id) {
    node* p = createnode(id);
    p->next = Head;
    Head = p;
}

void insertTail(node* &Head, int id) {
    node* p = createnode(id);
    if (Head == NULL) { Head = p; return; }
    node* temp = Head;
    while (temp->next != NULL) temp = temp->next;
    temp->next = p;
}

void insertAfterVal(node* &Head, int afterID, int newID) {
    node* temp = Head;
    while (temp != NULL && temp->studentID != afterID)
        temp = temp->next;
    if (temp == NULL) {
        cout << "Khong tim thay ID " << afterID << endl;
        return;
    }
    node* p = createnode(newID);
    p->next = temp->next;
    temp->next = p;
}

void deleteByVal(node* &Head, int id) {
    if (Head == NULL) { cout << "Danh sach rong!\n"; return; }

    if (Head->studentID == id) {
        node* del = Head;
        Head = Head->next;
        delete del;
        return;
    }

    node* temp = Head;
    while (temp->next != NULL && temp->next->studentID != id)
        temp = temp->next;

    if (temp->next == NULL) {
        cout << "Khong tim thay ID " << id << endl;
        return;
    }
    node* del = temp->next;
    temp->next = del->next;
    delete del;
}

int count(node* Head) {
    int count = 0;
    node* temp = Head;
    while (temp != NULL) {  
        count++;
        temp = temp->next;
    }
    return count;
}

void printList(node* head) {
    cout << "Danh sach: ";
    while (head != NULL) {
        cout << head->studentID << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

int main() {
    node* head = NULL;

    insertTail(head, 1000);
    insertTail(head, 1001);
    insertTail(head, 1002);
    insertHead(head, 999);

    printList(head);

    insertAfterVal(head, 1002, 1005);
    printList(head);

    deleteByVal(head, 1001);
    printList(head);

    cout << "So node trong danh sach: " << count(head) << endl;

    return 0;
}