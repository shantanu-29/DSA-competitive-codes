#include <iostream>  
using namespace std;
 
int solve(int arr[],int idx,int tar){
    if(tar%2==0) return 1;
    if(idx==0) return (arr[idx]%2==0);
    int nt=solve(arr,idx-1,tar);
    int t=solve(arr,idx-1,tar+arr[idx]);
    return (t+nt);
}

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        

        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        cout<<solve(arr,n-1,0)+1;
    }
}