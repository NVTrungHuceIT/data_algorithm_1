#include <iostream>
#include <string>

using namespace std;

void inputdiem (int a[], int &n) {
    cout << "Nhap so mon: "; cin >> n;
    for (int i = 1; i<=n ; i ++) {
        cout << " Nhap diem thu: " << i << ": " ; cin >> a[i];
    }
}

void outputdiem (int a[], int n) {
    cout  << " Bang diem cua sinh vien la: ";
    for (int i = 1; i<= n; i++) {
        cout  << a[i] << " ";
    }
    cout << endl;
}

void diemtrungbinh (int a[], int n) {
    double sum = 0;
    for (int i = 1; i<= n; i++) {
        sum += a[i];
    }
    if  (n > 0) 
        cout <<"Diem trung binh cua sinh vien la: " << sum/n;
}

int main () {
    int a[100];
    int n;
    inputdiem(a, n);
    outputdiem(a, n);

    diemtrungbinh(a, n);

    return 0;
}