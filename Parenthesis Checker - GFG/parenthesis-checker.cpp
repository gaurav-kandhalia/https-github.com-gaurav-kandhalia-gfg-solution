//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        stack<int> mystack;
        
     for (int i = 0; i < x.length(); i++) {
        if (x[i] == '(' || x[i] == '{' || x[i] == '[') {
            mystack.push(x[i]);
        } else if (x[i] == ')' && !mystack.empty() && mystack.top() == '(') {
            mystack.pop();
        } else if (x[i] == '}' && !mystack.empty() && mystack.top() == '{') {
            mystack.pop();
        } else if (x[i] == ']' && !mystack.empty() && mystack.top() == '[') {
            mystack.pop();
        } else {
            return false; // Unmatched closing bracket
        }
    }

    return mystack.empty();

    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends