#include<iostream>
using namespace std;

int main()
{
    int a,b,c,max=0;
    cin>>a>>b>>c;
    int rel[6];
    rel[0]= a*b+c;
    rel[1]= a+b*c;
    rel[2]= a+b+c;
    rel[3]= a*b*c;
    rel[4]= a*(b+c);
    rel[5]= (a+b)*c;

    for(int i=0;i<6;i++)
    {
        if(rel[i]>max)
        {
            max=rel[i];
        }
    }
    cout<<max;



}