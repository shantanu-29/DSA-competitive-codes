#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int max1=0,max2=0;
    	int sum1=0, sum2=0;
	
	
	while(n--)
	{
	    vector<int>al(3);

        vector<int>b(3);

        for(int i=0;i<3;i++)
        {
            cin>>al[i];
        }
        for(int i=0;i<3;i++){
            cin>>b[i];
        }
        sort(al.begin(),al.end());
        sort(b.begin(),b.end());

        int max1=b[1]+b[2];
        int max2=al[1]+al[2];
    if(A>B) 
        cout<<"Alice"<<endl;
    else if(A<B)
        cout<<"Bob"<<endl;
        
    else cout<<"Tie"<<endl;
            
    	
	    
	
	
	return 0;
}

#include <bits/stdc++.h>  
#define int long long
using namespace std;
 
 
void funct(){
   vector<int>a(3);
   vector<int>b(3);
   for(int i=0;i<3;i++){
    cin>>a[i];
   }
   for(int i=0;i<3;i++){
    cin>>b[i];
   }
   sort(a.begin(),a.end());
   sort(b.begin(),b.end());
   int B=b[1]+b[2];
   int A=a[1]+a[2];
   if(A>B) cout<<"Alice"<<endl;
   else if(A==B) cout<<"Tie"<<endl;
   else cout<<"Bob"<<endl;
}

 
 
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--) funct();
    return 0;
}
