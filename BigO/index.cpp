#include <iostream>
#include <vector>
#include <algorithm>

// Function to demonstrate O(1) - Constant Time Complexity
void constantTimeExample(const std::vector<int>& arr) {
    if (!arr.empty()) {
        std::cout << "First element: " << arr[0] << std::endl;
    }
}

// Function to demonstrate O(n) - Linear Time Complexity
void linearTimeExample(const std::vector<int>& arr) {
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

// Function to demonstrate O(n^2) - Quadratic Time Complexity
void quadraticTimeExample(const std::vector<int>& arr) {
    for (size_t i = 0; i < arr.size(); ++i) {
        for (size_t j = 0; j < arr.size(); ++j) {
            std::cout << "(" << arr[i] << ", " << arr[j] << ") ";
        }
        std::cout << std::endl;
    }
}

// Function to demonstrate O(log n) - Logarithmic Time Complexity
void logarithmicTimeExample(int n) {
    while (n > 1) {
        std::cout << n << " ";
        n /= 2;
    }
    std::cout << std::endl;
}

// Function to demonstrate O(n log n) - Linearithmic Time Complexity
void linearithmicTimeExample(std::vector<int>& arr) {
    std::sort(arr.begin(), arr.end());
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> arr = {5, 3, 8, 6, 2};

    std::cout << "O(1) Example:" << std::endl;
    constantTimeExample(arr);

    std::cout << "\nO(n) Example:" << std::endl;
    linearTimeExample(arr);

    std::cout << "\nO(n^2) Example:" << std::endl;
    quadraticTimeExample(arr);

    std::cout << "\nO(log n) Example:" << std::endl;
    logarithmicTimeExample(16);

    std::cout << "\nO(n log n) Example:" << std::endl;
    linearithmicTimeExample(arr);

    return 0;
}