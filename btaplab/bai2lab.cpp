#include <iostream>

using namespace std;

struct node {
    int data;
    node* next;
};

//tao node
node* createnode (int value) {
    node* p =  new node;
    p->data = value;
    p->next = NULL;
    return p;
}

//them node theo vi tri k
void insertAt (node * &head, int value, int k ) {
    if (k == 0) {
        node* p =  new node;
        p ->  data = value;
        p -> next = head;
        head = p;
    }

    node *temp = head;
    for  (int i = 0; i< k -1 && temp != NULL; i++) {
        temp = temp -> next;
    }
    if (temp == NULL) return;
    node * p = createnode(value);
    p-> next = temp -> next;
    temp -> next = p;
}

//xoa node theo gia tri
void deleleValue (node * &head, int x) {
    if (head == NULL) return;
    if (head -> data == x) {
        node * temp = head;
        head = head -> next;
        delete temp;
    }
    node * temp = head;
    while (temp ->next!=NULL && temp->next->data != x) {
        temp = temp -> next;    
    }
    if (temp->next != NULL) {
        node* del =  temp->next;
        temp->next = del-> next;
        delete del;
    }
}

void count (node *&head) {
    node * c= head;
    int count  = 0;
    while (c->next != NULL) {
        count = count + 1;
        c =c->next;
    }
    cout << "So luong nodes: " << count << endl;
}

int main () {
    node *head = NULL;

    insertAt(head, 1, 0);
    insertAt(head, 2, 1);
    count(head);
}


