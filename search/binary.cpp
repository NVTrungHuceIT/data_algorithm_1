#include <iostream>

using namespace std;

int binary_search_index(int a[], int n, int x) {
    int l = 0; int r = n-1;
    while (l <= r) {
        int mid = (l+r)/2;
        if (a[mid]== x) return mid;
        if (a[mid]< x) l=mid +1;
        else r = mid -1;
    }

    return -1;
}

int main () {
    int a[] = {2, 5, 7, 7, 9, 12, 15};
    int n = sizeof(a) / sizeof(a[0]);
    int x = 7;
    int pos = binary_search_index(a, n, x);
    if (pos != -1) cout << "Tim thay " << x << " tai vi tri " << pos << endl;
    else cout << "Khong tim thay " << x << endl;
}