#include <iostream>
using namespace std;

int linearExhaustiveSearch(int A[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (A[i] == x) {
            return i; // tìm thấy, trả về chỉ số
        }
    }
    return -1; // không tìm thấy
}

int main() {
    int A[] = {12, 25, 37, 40, 55};
    int n = sizeof(A) / sizeof(A[0]);  
    int x = 40;

    int pos = linearExhaustiveSearch(A, n, x);
    if (pos != -1)
        cout << "Tim thay " << x << " tai vi tri: " << pos << endl;
    else
        cout << "Khong tim thay " << x << endl;

    return 0;
}
