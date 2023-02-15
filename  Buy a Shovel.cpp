#include<iostream>
using namespace std;

int main()
{
    int k,r;
    cin>>k>>r;
    int ctr=0,i=1,rate=0;

    if((k-r)%10==0)
        {
            cout<<1;
        }
    else{
        while(ctr!=1)
        {       
            if(k<r)
            {
                cout<<r;
                break;
            }
            else
            {
                rate=k*i;
                if(rate%10==3 || rate%10==0 )
                {
                    ctr=1;
                    cout<<i;
                    break;
                }
                i++;
            }
            
        }
    }
    
    
}