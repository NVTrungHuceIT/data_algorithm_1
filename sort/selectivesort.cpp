#include <iostream>
#include <vector>
using namespace std;

void selectivesort (vector<int>& arr) {
    int n = arr.size();
    for (int i = 0 ; i < n-1; i++) {
        int minpos = i;
        for (int j = i+1; j <n; j++) {
            if (arr[j]< arr[minpos]) {
                minpos = j;
            }
        }
        swap(arr[i], arr[minpos]);
    }
}

int main () {
    int sz = 100;
    vector<int> arr (sz);
    
    for (int i = 0; i < sz; i++) {
        arr[i] = rand() %sz;
    }

    cout << "Mang truoc khi sap xep: " << endl;
    for  (int x : arr) cout << x << "  ";
    cout << endl;

    selectivesort (arr);

    cout << "Mang sau khi sap xep: "<< endl;
    for (int x : arr) cout << x << "  "; 

}