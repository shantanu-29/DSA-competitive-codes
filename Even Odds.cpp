#include<iostream>
using namespace std;

int main()
{
    long long n,m,odd,even,k; 
    cin>>n>>m;
    long long arr[n];
    if(n%2==0)
    {
        odd=n/2;
    }
    else{
        odd=n/2+1;
    }

    even=n/2;
    long long  j=1;
 
    for(long long i=0;i<odd;i++)
    {
        arr[i]=j;
        cout<<arr[i]<<" ";
        j=j+2;
    }
    k=2;
    for(long long i=odd;i<n;i++)
    {
        arr[i]=k;
        k=k+2;
        cout<<arr[i]<<" ";
    }

    cout<<arr[m-1];
}
