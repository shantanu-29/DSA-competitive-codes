#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) 
    {
        int n,d,h;
        cin>>n>>d>>h;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        float area = (0.5)*d*h;

        //cout<<area<<endl;
        float fin = area;
        for(int i=n-2;i>=0;i--)
        {
            if(arr[i]+h>=arr[i+1])
            {
                fin=fin+area;
            }
            
            else
            {
                float hnew =h-(arr[i+1]-arr[i]);
                float bnew = (hnew * d)/h;
                float areanew = area - (0.5)* hnew* bnew;
                fin= fin + areanew;
            }
        }

        cout<<fin<<endl;
    }

    return 0;
}
