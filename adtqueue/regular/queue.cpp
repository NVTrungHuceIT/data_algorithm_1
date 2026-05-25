#include <iostream>

using namespace std;

#define max 100
struct queue {
    int data[max];
    int front;
    int rear;
};

void init (queue &q) {
    q.front = 0;
    q.rear = -1;
}

bool isEmpty(queue &q) {
    return q.front == q.rear + 1;
}
bool isFull(queue &q) {
    return q.rear == max - 1;
}

bool enqueue (queue &q, int x) {
    if (isFull(q)) return false;
    q.data[++q.rear] = x;
    return true;
}

bool dequeue (queue &q, int x) {
    if (isEmpty(q)) return false;
    x = q.data [q.front++];
    return true;
}

void display (queue &q) {
    if (isEmpty(q)) {
        cout<< "Khong co phan tu trong hang cho";
        return;
    }
    while (q.front <= q.rear){
        cout << q.data[q.front] << " ";
        q.front++;
    }
}

int main () {
    queue q;
    init(q);
    enqueue (q, 1);
    enqueue (q, 2);
    enqueue (q, 3);

    int x;
    dequeue (q, x);

    display(q);
    return 0;
}