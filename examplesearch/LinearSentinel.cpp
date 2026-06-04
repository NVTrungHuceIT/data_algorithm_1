#include <iostream>
using namespace std;

int linearSentinelSearch(int A[], int n, int x) {
    // Đặt lính canh
    A[n] = x;
        int i = 0;
    while (A[i] != x) {
        i++;
    }

    if (i < n) return i;  // tìm thấy trong mảng
    return -1;            // không tìm thấy
}

int main() {
    int n = 5;
    int A[6] = {10, 25, 30, 45, 50}; // mảng size n+1 để chứa lính canh
    int x = 30;

    int pos = linearSentinelSearch(A, n, x);
    if (pos != -1)
        cout << "Tim thay " << x << " tai vi tri: " << pos << endl;
    else
        cout << "Khong tim thay " << x << endl;

    return 0;
}
