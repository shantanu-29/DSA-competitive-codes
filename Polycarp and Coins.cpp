#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int m=n/3;
        int one = n-2*m;
        // m=m+rem/2;
        // rem=rem-rem/2;
        cout<<one<<" "<<m<<endl;


    }
}






















