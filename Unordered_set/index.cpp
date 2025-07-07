#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> mySet;

    // Add elements
    mySet.insert(10);
    mySet.insert(20);
    mySet.insert(10);  // Duplicate, will be ignored

    // Check if a number exists
    if (mySet.count(10)) {
        cout << "10 is in the set" << endl;
    }

    // Iterate through the set
    for (int num : mySet) {
        cout << num << endl;
    }

    return 0;
}
