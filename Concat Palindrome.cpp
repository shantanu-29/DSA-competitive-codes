#include<iostream>  
using namespace std;
//Declaring generatePermutation()  
void generatePermutation(char * , int , int );  
int factorial(int );

int main()  
{  

    int t;
    cin>>t;
    while(t--)
    {
        int len1,len2;
        cin>>len1>>len2;
        string str1,str2;
        cin>>str1;
        cin>>str2;

        generatePermutation(str1,0,len1);
        generatePermutation(str2,0,len2);

    }



    char str[] = "ABC";  
    int n =strlen(str);  
    //printf("All the permutations of the string are: \n");  
    generatePermutation(str,0,n);  
}  
  
//Function for generating different permutation of the string.  




void generatePermutation(char *str,const int start, int end)  
{  
    char temp;  
    int i,j;  
    for(i = start; i < end-1; ++i){  
    for(j = i+1; j < end; ++j)  
    {  
    //Swapping the string by fixing a character  
        temp = str[i];  
        str[i] = str[j];  
        str[j] = temp;  
        //Recursively calling function generatePermutation() for rest of the characters  
    generatePermutation(str , i+1 ,end);  
        //Backtracking and swapping the characters again  
        temp = str[i];  
        str[i] = str[j];  
        str[j] = temp;  
    }  
    }  
    //Print the permutations  
    cout<<str<<endl;
   
    int length1 = factorial(end);
    char a1[length];
    for(int i=0; i<length1; i++)
    {
        
    }



   
} 

int factorial(int n)
{
    // single line to find factorial
    return (n==1 || n==0) ? 1: n * factorial(n - 1);
}