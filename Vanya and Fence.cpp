#include<iostream>

using namespace std;

int main()
{
    int n,m,i,sum=0;
    cin>>n>>m;
    int arr[n];
    for(i=0; i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>m)
        {
            sum=sum+2;
        }
        else{
            sum++;
        }
    }
    cout<<sum;


}