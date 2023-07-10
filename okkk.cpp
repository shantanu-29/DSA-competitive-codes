#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdint>

std::pair<int64_t, int> maxSumAndOperations(const std::vector<int>& arr) {
    int n = arr.size();
    int negatives = 0;
    int64_t sum = 0;
    int minOperations = n; // Initialize with maximum possible value

    for (int i = 0; i < n; ++i) {
        sum += std::abs(arr[i]);

        if (arr[i] < 0)
            negatives++;

        minOperations = std::min(minOperations, negatives);
    }

    // If the number of negatives is odd, we can remove the smallest absolute value negative to maximize the sum
    if (negatives % 2 == 1)
        sum -= 2 * (*std::min_element(arr.begin(), arr.end(), [](int a, int b) {
            return std::abs(a) < std::abs(b);
        }));

    return std::make_pair(sum, minOperations);
}

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;

        std::vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> arr[i];
        }

        std::pair<int64_t, int> result = maxSumAndOperations(arr);
        std::cout << result.first << " " << result.second << "\n";
    }

    return 0;
}
