#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
        int odd;
	    if(n>=2*k)
	    {
	        if(n%2==0)
	        {
	            odd=n/2;
	        }
	        else
	            odd= n/2 +1;
	        if(odd>k)
	        {
	            int rem= odd-k;
	            if(rem%2==0)
	            {
	                cout<<"YES"<<endl;
	            }
	            else
	            {
	                cout<<"NO"<<endl;
	            }
	        }
            else{
                cout<<"NO"<<endl;
            }
	        
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
