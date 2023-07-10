#include<iostream>

using namespace std;

int binarySearch(int ar[], int l, int r, int x)
{
    int ctr =0;
    while (l <= r) {
        int m = l + (r - l) / 2;
 
        // Check if x is present at mid
        if (ar[m] == x)
            ctr++;
 
        // If x greater, ignore left half
        if (ar[m] < x)
            l = m + 1;
 
        // If x is smaller, ignore right half
        else
            r = m - 1;
    }
 
    // if we reach here, then element was
    // not present
    return ctr;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+n);
    int q;
    cin>>q;
    while(q--)
    {
        int ctr=0;
        int c;
        cin>>c;
        int result = binarySearch(arr, 0, n - 1, c);
        // int ele=0;
        // ele = upper_bound(arr, arr+n,c)-arr;
        cout<<result<<endl;
    }


}