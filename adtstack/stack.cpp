#include <iostream>
#include <iomanip>

using namespace std;

#define max  100

struct stack {
    int data [max];
    int top;
};

void init (stack &s) {
    s.top = -1;
}

bool isEmpty(stack s) {
    return s.top == -1;
}

bool isFull (stack s) {
    return s.top == max -1;
}

bool push (stack &s, int x) {
    if (isFull(s)) return false;
    s.data[++ s.top]=x;
    return true;
}

bool pop (stack &s, int x) {
    if (isEmpty(s)) return false;
    x = s.data[s.top--];
    return true;
}

bool peek (stack &s, int x) {
    if (isEmpty (s)) return false;
    x= s.data [s.top];
    return true;    
}

void display (stack s) {
    if (isEmpty(s)) {
        cout << "Danh sach rong"<< endl;
        return;
    } 
    for (int i = s.top; i >= 0; i--) {
        cout << s.data[i]<<"  ";
    }
    cout << endl;
}

int main () {
    struct stack s;
    init(s);
    push(s,1);
    push(s,2);
    push(s,3);
    cout << "Truoc khi xoa, cac phan tu trong ds la: "<< endl;
    display(s);

    int x;
    pop(s, x);

    cout << "Sau khi xoa, cac phan tu trong ds la: " << endl;
    display(s);

}