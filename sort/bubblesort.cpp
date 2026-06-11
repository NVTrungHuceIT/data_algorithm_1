#include <iostream>

using namespace std;

void bubble (int a[], int n) {
    for (int i = 0 ; i < n-1 ; i++) {
        for (int j = 0 ; j < n-i-1 ; j++) {
            if(a[j] > a[j+1]){
                swap(a[j], a[j+1]);
            }
        }
    }
}

int main () {
    int a[] = {29, 18, 17, 15, 9};
    int n= sizeof(a) / sizeof(a[0]);
    bubble (a, n);
    cout << "Mang sau khi sap xep la: " << endl;
    for (int i = 0 ; i< n ; i++) {
        cout << a[i] << "  ";
    }
}