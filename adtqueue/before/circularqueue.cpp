#include <iostream>

using namespace std;

#define max 100
struct queue {
    int data [max];
    int front, rear;
};
void init (queue &q) {
    q.front =0;
    q.rear = 0; 
}
bool isEmpty (queue q) {
    return q.rear == q.front;
}
bool isFull (queue q) {
    return (q.rear + 1) % max == q.front;
}
bool enqueue (queue &q,int x) {
    if (isFull(q)) return false;
    q.data [q.rear] = x;
    q.rear = (q.rear +1) % max;
    return true;
}
bool dequeue (queue &q, int &x) {
    if (isEmpty(q)) return false;
    x = q.data[q.front];
    q.front = (q.front + 1) % max;
    return true;
} 
int main () 
{
    queue q;
    init (q);
    

    enqueue (q, 3);
    enqueue (q, 4);
    enqueue (q, 5);

    int x;
    dequeue (q, x);
    cout << x << "\n";
    return 0;

}
