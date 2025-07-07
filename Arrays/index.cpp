#include <iostream>
using namespace std;

int main() {
    // 📦 Declare and initialize a static array of 5 integers
    int numbers[5] = {1, 2, 3, 4, 5};

    // 🔍 Accessing the first element
    cout << "First element: " << numbers[0] << endl;

    // ✏️ Updating an element (just like reassigning in JS)
    numbers[0] = 10;
    cout << "Updated first element: " << numbers[0] << endl;

    // 🔁 Looping through the array
    for (int i = 0; i < 5; i++) {
        cout << "Element at index " << i << ": " << numbers[i] << endl;
    }

    // 🧠 Total size in bytes
    cout << "\nSize of entire array in bytes: " << sizeof(numbers) << endl;

    // 🔢 Total number of elements = total size / size of one element
    cout << "Total number of elements: " << sizeof(numbers) / sizeof(numbers[0]) << endl;

    // 🚨 Accessing out-of-bounds (Not recommended!)
    cout << "\nTrying to access index 10 (undefined behavior): " << numbers[10] << endl;

    return 0;
}
