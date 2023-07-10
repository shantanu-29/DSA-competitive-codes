#include <iostream>
#include <vector>

void generateNumbers(int n, int current, std::vector<int>& result) {
    // Base case: Stop recursion when we reach n numbers
    if (n == 0) {
        return;
    }
    
    // Add the current number to the result vector
    result.push_back(current);
    
    // Generate the next numbers by appending '5' and '6' to the current number
    generateNumbers(n - 1, current * 10 + 5, result);
    generateNumbers(n - 1, current * 10 + 6, result);
}

void printNumbers(int n) {
    std::vector<int> result;
    
    
    // Start the recursive generation from 5 and 6
    generateNumbers(n, 5, result);
    generateNumbers(n, 6, result);
    
    // Print the generated numbers
    for (int i = 0; i < n; i++) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int n = 5;
    printNumbers(n);
    
    return 0;
}
