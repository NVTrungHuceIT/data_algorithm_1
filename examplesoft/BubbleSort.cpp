#include <iostream>
using namespace std;

void bubbleSort(int a[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);  //hàm hoán vị trong thư viện chuẩn iostream
            }
        }
    }
}

int main()
{
    int a[] = {29, 10, 14, 37, 13};
    int n = sizeof(a) / sizeof(a[0]);

    bubbleSort(a, n);

    cout << "Mang sau khi sap xep: ";

    for(int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}