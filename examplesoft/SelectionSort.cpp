    #include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // hoán đổi phần tử nhỏ nhất với phần tử đầu của đoạn chưa sắp xếp
        swap(arr[i], arr[minIndex]);
    }
}
int main() {
    int sz = 10000;
    
	vector<int> arr(sz);
	for (int i=0; i<sz; i++) {
         arr[i] = rand() % sz;	//sinh ra mang cac so nguyen <= sz
    }
	
    cout << "Mang ban dau: \n";
    for (int x : arr) cout << x << " ";
    cout << endl;

    selectionSort(arr);

    cout << "Mang da sap xep: \n";
    for (int x : arr) cout << x << " ";
    cout << endl;
	
    return 0;
}
