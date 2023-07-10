#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N, K, L;
        cin >> N >> K >> L;
        
        int max_length = -1;
        int count = 0;
        
        for (int i = 0; i < N; i++) {
            int length, language;
            cin >> length >> language;
            
            if (language == L) {
                if (count < K) {
                    max_length = length;
                    count++;
                } else if (count == K && length > max_length) {
                    max_length = length;
                }
            }
        }
        
        if (count < K) {
            max_length = -1;
        }
        
        cout << max_length << endl;
    }
    
    return 0;
}
