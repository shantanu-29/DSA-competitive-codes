#include<iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n;
    
    if(n>=0)
    {
        cout<<n;
    }

    else{
        m=n;
        m=m*(-1);
        int m1,m2;
        m1=m%10;
        m2=(m/10)%10;
        int m3=m/100;

        if(m2>=m1)
        {
            cout<<(10*m3+m1)*(-1);
        }
        else if(m1>m2)
        {
            cout<<(10*m3+m2)*(-1);
        }

    }
    
}