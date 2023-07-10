#include <iostream>
#include <vector>
#include <map>

std::vector<int> rearrangeTemperature(int n, int k, const std::vector<int>& a, const std::vector<int>& b) {
    std::map<int, int> count;
    std::vector<int> result(n);

    for (int i = 0; i < n; i++) {
        count[b[i]]++;
    }

    for (int i = 0; i < n; i++) {
        int currTemp = a[i];

        for (int j = currTemp - k; j <= currTemp + k; j++) {
            if (count.find(j) != count.end() && count[j] > 0) {
                result[i] = j;
                count[j]--;
                break;
            }
        }
    }

    return result;
}

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n, k;
        std::cin >> n >> k;

        std::vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            std::cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            std::cin >> b[i];
        }

        std::vector<int> result = rearrangeTemperature(n, k, a, b);

        for (int i = 0; i < n; i++) {
            std::cout << result[i] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
