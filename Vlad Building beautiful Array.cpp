#include <iostream>
#include <vector>

using namespace std;


int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int ctr=0;

        bool Check = arr[0] % 2 == 0;
        for (int i = 1; i < n; i++) 
        {
            if (arr[i] % 2 == 0 && !Check) 
            {
                cout<<"NO"<<endl;
                ctr++;
                break;
            }
            else if (arr[i] % 2 != 0 && Check) 
            {
                cout<<"NO"<<endl;
                ctr++;
                break;
            }
        }

        if(ctr==0)
        {
            cout<<"YES"<<endl;
        }
        ctr=0;

    }

    return 0;
}
