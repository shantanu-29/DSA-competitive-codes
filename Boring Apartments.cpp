#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int n,num=0,last=0,sum=0,dig=0;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];              
    }
    for(int i=0;i<n;i++)
    {
        num=arr[i];
        last=num%10;
        dig = log10(num)+1;
        sum= 10*(last-1)+dig*(dig+1)/2;
        cout<<sum<<endl;

    }
}