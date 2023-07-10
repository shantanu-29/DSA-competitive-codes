#include<iostream>
using namespace std;

int main()
{
    string s1,s2,s3,str3;
    getline(cin,s1);
    getline(cin,s2);
    getline(cin,s3);
    str3 = s1+s2;
    //cout<<str3<<endl;
    sort(str3.begin(), str3.end());
    sort(s3.begin(), s3.end());
    //cout<<str3<<endl;
    //cout<<s3<<endl;
    if(str3==s3)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

}