#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long arr[3];
        for(int i=0; i<3;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+3);

        if(arr[1]==arr[2] && arr[2]>=arr[0])
        {
            cout<<"YES"<<endl;
            cout<<arr[0]<<" "<<arr[0]<<" "<<arr[2]<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
}