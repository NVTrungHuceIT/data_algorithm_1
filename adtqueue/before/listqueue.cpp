#include <iostream>

using namespace std;

#define Max 100
struct Queue {
    int data[Max];
    int front;
    int rear;
};

void init (Queue &q) {
    q.front = 0;
    q.rear = -1;
} 

bool isFull (Queue q) {
    return q.rear ==  Max - 1;
} 

bool isEmpty (Queue q) {
    return q.rear < q.front;
}

bool enqueue (Queue &q, int x) {
    if (isFull(q)) return false;
    q.data [++ q.rear] = x;
    return true;
}

bool dequeue (Queue &q, int &x) {
    if (isEmpty(q)) return false;
    x= q.data[q.front ++];
    return true;
}

int main () 
{
    Queue q;
    init (q);
    enqueue (q, 300);
    enqueue (q, 400);
    enqueue (q, 500);

    int x;
    dequeue (q, x);
    cout << x << "\n";
    return 0;
}