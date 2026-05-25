#include <iostream>

using namespace std;

struct node {
    int data;
    node * next;
};

void enqueue (node *front, node *rear, int x ) {
    node *p = new node;
    p->data = x;
    p->data = NULL;
    if (rear == NULL) {
        front = rear = p;
    }
    else {
        rear ->next = p; 
        rear = p;
    }
}

bool dequeue (node *front, node *rear, int x) {
    if (front == NULL) return false;

    node *temp = front;
    x = temp->data;
    front  = front ->next;
    if (front  == NULL) {
        rear = NULL;
    }

    delete temp;
    return true;
}