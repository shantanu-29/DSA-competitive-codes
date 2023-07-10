#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin>>n;
        int ctr=0;
        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;
            if(b<a) 
                {ctr++;}
        }
        cout<<ctr<<endl;

    }


    return 0;
}
