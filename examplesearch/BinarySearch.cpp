#include <iostream>
using namespace std;

// Trả về chỉ số của x trong A (nếu có), ngược lại trả về -1.
int binary_search_index(int A[], int n, int x) {
    int l = 0, r = n - 1;
    while (l <= r) {
        int mid = (l + r)/2;
        if (A[mid] == x) return mid;
        if (A[mid] < x)  l = mid + 1;
        else             r = mid - 1;
    }
    return -1;
}

int main() {
    int A[] = {2, 5, 7, 7, 9, 12, 15};
    int n = sizeof(A) / sizeof(A[0]);
    int x = 7;
    int pos = binary_search_index(A, n, x);
    if (pos != -1) cout << "Tim thay " << x << " tai vi tri " << pos << "\n";
    else cout << "Khong tim thay " << x << "\n";
}
