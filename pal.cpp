#include <iostream>
using namespace std;

int main() 
{
	// your code goes here
	
	    vector<string> vec;
        int n;
        cin>>n;

        for(int i=0;i<n;i++)
        {
            string st;
            cin>>st;
            auto it = find(vec.begin(), vec.end(), st);

            if(it != vec.end())
            {
                vec.erase(it);
            }

            vec.push_back(st);
        }

        int num = vec.size();
        string str[num];
        copy(vec.begin(), vec.end(), str);
        string final="";

        for(int i=num-1;i>-1;i--)
        {
            string s = str[i];
            string lastTwoLetters = s.substr(s.length() - 2);
            final =final+lastTwoLetters;
        }

        cout<<final;


	    
	    return 0;
}
	

