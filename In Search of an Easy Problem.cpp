#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n],ctr=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==1)
        {
            cout<<"HARD";
            ctr++;
            break;
        }
    }
    if(ctr==0)
    {
        cout<<"EASY";
    }

}

