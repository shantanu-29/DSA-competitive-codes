#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int arr[t];
	for(int i=0;i<t;i++)
	{
	    cin>>arr[i];
	    if(arr[i]>=80)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	
	return 0;
}
