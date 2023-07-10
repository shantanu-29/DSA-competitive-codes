// #include<iostream>
// #include<cmath>
// using namespace std;

// int main()
// {
//     int t;
//     cin>>t;

//     while(t--)
//     {
//         int h,x,y;
//         int ctr=0;
//         cin>>h>>x>>y;
        
//         if(y>x)
//         {
//             h=h-y;
//             ctr++;
//             if(h<=0)
//             {
//                 cout<<ctr<<endl;
//                 break;
//             }
//             // float num =(float)h/x;
//             // cout<<ceil(num)+1<<endl;  
//             int num=h%x;
//             if(num==0)         
//             {
//                 ctr+=h/x;
//             }
//             else
//             {
//                 ctr+=(h/x)+1;
//             }
//             cout<<ctr<<endl;
//         }
//         else{
//             // float num =(float)h/x;
//             // cout<<ceil(num)<<endl;
//             int num=h%x;
//             if(num==0)
//             {
//                 ctr+=(h/x);
//             }
//             else
//             {
//                 ctr+=(h/x)+1;
//             }
//             cout<<ctr<<endl;
//         }
//     }
// }


#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int h,x,y;
        cin>>h>>x>>y;
        int ctr=0;
        while(h>0)
        {
            if(y>x)
            {
                ctr++;
                h=h-y;
                y=0;
            }
            else
            {
                ctr++;
                h=h-x;
            }
        }
        cout<<ctr<<endl;

    }
}