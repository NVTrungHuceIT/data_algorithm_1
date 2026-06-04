//Ví dụ tìm kiếm hàm băm sử dụng địa chỉ mở – Dò tìm bình phương (Quadratic Probing)
#include <iostream>
using namespace std;

#define SIZE 11

class HashTable {
private:
    int table[SIZE];

public:
    HashTable() {
        for (int i = 0; i < SIZE; i++)
            table[i] = -1;
    }

    int hashFunction(int key) {
        return key % SIZE;
    }

    void insert(int key) {
        int index = hashFunction(key);

        int i = 0;
        while (table[(index + i * i) % SIZE] != -1)
            i++;

        table[(index + i * i) % SIZE] = key;
    }

    bool search(int key) {
        int index = hashFunction(key);

        int i = 0;
        while (i < SIZE) {
            int pos = (index + i * i) % SIZE;

            if (table[pos] == -1)
                return false;

            if (table[pos] == key)
                return true;

            i++;
        }

        return false;
    }

    void display() {
        for (int i = 0; i < SIZE; i++)
            cout << i << ": " << table[i] << endl;
    }
};

int main() {
    HashTable ht;

    ht.insert(22);
    ht.insert(1);
    ht.insert(13);
    ht.insert(11);
    ht.insert(24);
    ht.insert(33);

    ht.display();

    if (ht.search(33))
        cout << "Tim thay 33";
    else
        cout << "Khong tim thay 33";

    return 0;
}