#include <iostream>

using namespace std;

void insert (int a[], int n) {
    for (int i = 1; i < n; i++) {
        int key = a[i];
        int j = i -1;
        while (j >= 0 && a[j] > key){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
}

int main () {
    int a[] = {29, 10, 14, 37, 13};
    int n = sizeof(a)/sizeof(a[0]);

    insert (a, n);

    cout << "Mang sau khi sap xep: " << endl;

    for(int x : a) cout << x << " ";
    return 0;
}