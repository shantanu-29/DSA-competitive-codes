#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int numCases;
    cin >> numCases;
    
    while (numCases--)
    {
        int length;
        cin >> length;
        
        string str;
        cin >> str;
        
        int count = 0;
        stack<char> parenthesesStack;
        int i = 0;
        
        while (i < length)
        {
            if (parenthesesStack.empty())
            {
                if (str[i] == ':')
                {
                    parenthesesStack.push(str[i]);
                }
                i++;
            }
            
            if (!parenthesesStack.empty())
            {
                if (str[i] == ':' && parenthesesStack.top() == ':')
                {
                    parenthesesStack.push(str[i]);
                    i++;
                }
                
                if (str[i] == ')')
                {
                    parenthesesStack.push(str[i]);
                    i++;
                }
                
                if (str[i] == ':' && parenthesesStack.top() == ')')
                {
                    count++;
                    
                    while (!parenthesesStack.empty())
                    {
                        parenthesesStack.pop();
                    }
                    
                    parenthesesStack.push(str[i]);
                    i++;
                }
                
                if (str[i] == '(')
                {
                    while (!parenthesesStack.empty())
                    {
                        parenthesesStack.pop();
                    }
                    
                    i++;
                }
            }
        }
        
        cout << count << endl;
    }
    
    return 0;
}
