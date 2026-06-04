//Tim kiem trong bang bam su dung dia chi mo va do tim tuyen tinh
#include <iostream>
using namespace std;

#define SIZE 7

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

        while (table[index] != -1) {
            index = (index + 1) % SIZE;
        }

        table[index] = key;
    }

    bool search(int key) {
        int index = hashFunction(key);
        int start = index;

        while (table[index] != -1) {
            if (table[index] == key)
                return true;

            index = (index + 1) % SIZE;

            if (index == start)
                break;
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

    ht.insert(15);
    ht.insert(11);
    ht.insert(27);
    ht.insert(8);
    ht.insert(12);
    ht.insert(18);

    ht.display();

    if (ht.search(18))
        cout << "Tim thay 18";
    else
        cout << "Khong tim thay 18";

    return 0;
}