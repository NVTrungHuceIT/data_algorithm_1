#include <iostream>
#include <string>
using namespace std;

struct node {
    int data;
    node* next;
};

node* createnode (int value) {
    node * p = new node;
    p->data = value;
    p->next = NULL;
    return p;
}

node* insertHead (node* &Head, int value) {
    node * p = createnode(value);
    p ->next = Head;
    Head = p;
    return p;
}

node * insertTail (node * &Head, int value) {
    node * p = createnode(value);
    if (Head == NULL) {
        Head = p;
        return p;
    }
    node * temp = Head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = p;
    return p;
}
//Them node vao vi tri k
void insertAt (node * &Head, int value, int k) {
    if (k == 0) {
        insertHead (Head, value);
        return;
    }
    
    node * temp = Head;
    for (int i = 0; i < k-1 && temp != NULL; i ++) {
        temp = temp ->next;
    }

    if (temp == NULL) return;
    node *p = createnode (value);
    p -> next= temp ->next;
    temp -> next = p;
}
//Xoa node o vi tri k
void deleteAt (node * &Head, int k) {
    if (k == 0) {
        node * del = Head;
        Head = del->next;
        delete del;
        return;
    }

    node * temp= Head;
    for (int i = 0; i <k-1 && temp != NULL; i++) {
        temp = temp -> next;
    }
    if (temp == NULL || temp -> next == NULL) return;
    node * del = temp -> next;
    temp -> next = del -> next;
    delete del;
}

//Dem so node trong danh sach
void count (node * Head){
    int count= 0;
    node *temp = Head;
    while (temp -> next!= NULL) {
        temp = temp -> next;
        count +=1;
    }
    cout << "So node trong danh sach la: " << count;
}

void printList (node * head) {
    cout << "Danh sach: ";
    while (head != NULL) {
        cout << head ->data << " -> " ;
        head= head ->next;
    }
    cout << "NULL\n";
}
int main () {
    node* head = NULL;
    
    insertHead(head, 3);
    insertHead(head, 5);
    insertTail(head, 10);

    insertAt (head, 7, 2);
    deleteAt (head, 0);

    printList(head);
    count (head);

    return 0;
}

