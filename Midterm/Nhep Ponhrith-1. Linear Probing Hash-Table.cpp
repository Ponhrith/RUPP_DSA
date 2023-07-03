#include <iostream>
#include <list>

using namespace std;

class LinearProbingHashTable {
private:
    list<int>* table;
    int tableSize;

public:
    LinearProbingHashTable(int size) {
        tableSize = size;
        table = new list<int>[tableSize];
    }

    int hashFunction(int key) {
        return key % tableSize;
    }

    void insertKey(int key) {
        int index = hashFunction(key);

        while (!table[index].empty()) {
            index = (index + 1) % tableSize;
        }

        table[index].push_back(key);
    }

    void displayTable() {
        for (int i = 0; i < tableSize; i++) {
            cout << i << " -> ";
            if (!table[i].empty()) {
                for (int key : table[i]) {
                    cout << key << " ";
                }
            }
            cout << endl;
        }
    }
};

int main() {
    int tableSize = 10;

    LinearProbingHashTable hashTable(tableSize);

    // Create a list of keys
    list<int> keys = {4371, 1323, 6173, 4199, 4344, 9679, 1989};

    // Insert keys into the hash table
    for (int key : keys) {
        hashTable.insertKey(key);
    }

    cout << "Hash Table:" << endl;
    hashTable.displayTable();

    return 0;
}