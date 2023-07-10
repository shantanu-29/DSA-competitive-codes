#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    int max1=0,max2=0,temp1=0,temp2=0;
	    cin>>n;
	    int o[n],a[n];
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>o[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        if(o[i]!=0)
	        {
	            max1++;
	            
	        }
            else
            {
                temp1=max(temp1,max1);
                max1=0;
            }  
	        
	    }
        temp1=max(max1,temp1);
        

        for(int i=0;i<n;i++)
	    {
	        if(a[i]!=0)
	        {
	            max2++;
	            
	        }
            else
            {
                temp2=max(temp2,max2);
                max2=0;
            }  
	        
	    }

        temp2=max(max2,temp2);

        if(temp1>temp2)
        {
            cout<<"Om"<<endl;
        }
        else if(temp1<temp2)
        {
            cout<<"Addy"<<endl;
        }
        else if (temp1==temp2)
        {
            cout<<"Draw"<<endl;
        }

	    
	}
	return 0;
}
