#include<iostream>
using namespace std;

int main()
{
    int k,r;
    cin>>k;   // price of one showel
    cin>>r;   // denomination 
    int num;
    int ctr=0,i=1,rate;

    if(k%10==0 && k>=10)
    {
        num= k/10;
    }
    if(k==r)
    {
        num=1;
    }
    else
    {
        while(ctr!=1)
        {
            rate = k*i;
            if(rate%10 ==0 || rate%10==r)
            {
                num=i;
                ctr=1;
            }
            i++;
        }
        
    }

    cout<<num;

    
}
