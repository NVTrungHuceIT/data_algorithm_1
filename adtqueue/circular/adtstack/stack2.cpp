#include <iostream>

using namespace std;

struct node {
    int data;
    node *next;
};

void push (node* &top, int x) {
    node *p = new node;
    p->data = x;
    p->next =top;
    top = p;
}

bool pop (node *&top, int &x) {
    if (top == NULL) return false;
    node* temp=  top;
    x = temp->data;
    top = temp->next;
    delete temp;
    return true;
}

void display (node*&top) {
    node *dis = top;
    while (dis != NULL) {
        cout << dis->data << " ";
        dis = dis->next;
    }
    cout << endl;
}

int main () {
    node *top = NULL;
    push(top, 1);
    push(top, 2);
    push(top, 3);
    
    int popped;
    pop(top, popped);
    
    cout << "Stack: ";
    display(top);
    
    return 0;
}