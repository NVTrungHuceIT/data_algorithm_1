//Tim kiem trong bang bam su dung chuoi ket noi
#include <iostream>
#include <list>
using namespace std;

class HashTable {
private:
    int size;
    list<int>* table;

public:
    HashTable(int s) {
        size = s;
        table = new list<int>[size];
    }

    int hashFunction(int key) {
        return key % size;
    }

    void insert(int key) {
        int index = hashFunction(key);
        table[index].push_back(key);
    }

    bool search(int key) {
        int index = hashFunction(key);

        for (int x : table[index]) {
            if (x == key)
                return true;
        }
        return false;
    }

    void display() {
        for (int i = 0; i < size; i++) {
            cout << i << ": ";
            for (int x : table[i])
                cout << x << " -> ";
            cout << "NULL\n";
        }
    }
};

int main() {
    HashTable ht(7);

    ht.insert(15);
    ht.insert(11);
    ht.insert(27);
    ht.insert(8);
    ht.insert(12);
    ht.insert(7);
    ht.insert(18);

    ht.display();

    if (ht.search(18))
        cout << "Tim thay 18";
    else
        cout << "Khong tim thay 18";

    return 0;
}