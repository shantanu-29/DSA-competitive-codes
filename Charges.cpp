#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	   
	    int n;
	    string s;
	    cin>>n;
	    cin>>s;
	    int c=0;
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]=='0')
	        {
	            c=c+1;
	            
	        }
	    }
	    int c1=0;
	    if(c==n)
	    {
	        cout<<n<<endl;
	    }
	    if(c==0)
	    {
	        cout<<0<<endl;
	    }
	    else if(c!=n && c!=0)
	    {
	        int i=0;
	        while(i<=n)
	        {
	            if(s[i]=='+' && s[i+1]!='+')
	            {
	                for(int j=i+1;j<n;j++)
	                {
	                    if(s[j]=='-')
	                    {
	                        int z=j-i-1;
	                        if(z%2!=0)
	                        {
	                            c1++;
	                            break;
	                        }
	                        
	                        
	                    }
	                }
	            }
	            else if(s[i]=='-' && s[i+1]!='-')
	            {
	                for(int j=i+1;j<n;j++)
	                {
	                    if(s[j]=='+')
	                    {
	                        int z=j-i-1;
	                        if(z%2!=0)
	                        {
	                            c1++;
	                            break;
	                        }
	                        
	                    }
	                }
	            }
	            i++;
	            
	        }
	        cout<<c1<<endl;
	    }
	    
	}
}