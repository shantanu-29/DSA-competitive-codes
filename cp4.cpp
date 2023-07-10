#include <iostream>
#include <vector>

std::string findSubsequence(int N, int B, const std::vector<int>& A) {
    // Check if B is present as a subsequence in A
    for (int i = 0; i < (1 << N); i++) {
        int bitwiseAnd = B;
        for (int j = 0; j < N; j++) {
            if (i & (1 << j)) {
                bitwiseAnd &= A[j];
            }
        }
        if (bitwiseAnd == B) {
            return "YES";
        }
    }
    return "NO";
}

int main() {
    int T;
    std::cin >> T;

    for (int t = 0; t < T; t++) {
        int N, B;
        std::cin >> N >> B;

        std::vector<int> A(N);
        for (int i = 0; i < N; i++) {
            std::cin >> A[i];
        }

        std::string result = findSubsequence(N, B, A);
        std::cout << result << std::endl;
    }

    return 0;
}
