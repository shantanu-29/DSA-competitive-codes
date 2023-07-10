#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    long long t,k,x,ctr=0;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        // GP sum: x*(2^n -1)/(2-1) = x*(2^n-1) = n   a=x, r=2, n=k, 
        while(ctr>0)
        {
            long long res=0;

            for(long long k=1; k<1000; k++)
            {
                long long power = pow(2,k);
                cout<<k<<endl;
                if((n%(power-1))==0)
                {
                    x=n/(power-1);
                    ctr++;
                    cout<<ctr<<endl;
                    cout<<power<<endl;
                    break;
                }
            }
            //res = x*(pow(2,k)-1)== n;
        }
        cout<<x<<endl;
    }
}