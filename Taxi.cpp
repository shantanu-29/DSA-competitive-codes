#include<iostream>
using namespace std;

int main()
{
    int t, n,one=0,two=0,three=0,four=0,ctr=0;
    cin>>t;
    int arr[t];
    for(int i=0;i<t;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+t);
    for(int i=0;i<t;i++)
    {
        if(arr[i]==4)
        {
            four++;
        }
        else if(arr[i]==3)
        {
            three++;
        }
        else if(arr[i]==2)
        {
            two++;
        }
        else if(arr[i]==1)
        {
            one++;
        }
    }
    ctr=ctr+four;
    //cout<<ctr<<endl;
    if(one<three)
    {
        ctr=ctr+three;
        one=0;
    }
    else if(one>three)
    {
        ctr=ctr+three;
        one=one-three;
    }
    else if(one==three)
    {
        ctr=ctr+three;
        one=0;
        three=0;
    }
    ctr=ctr+(two*2)/4;
    two= (two*2)%4;
    if((two+one)%4==0)
    {
        ctr=ctr+(two+one)/4;
    }
    else
    {
        ctr=ctr+(one+two)/4+1;
    }
    

    cout<<ctr;

}