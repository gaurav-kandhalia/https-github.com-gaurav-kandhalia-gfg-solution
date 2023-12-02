//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

vector<int> deleteElement(int arr[],int n,int k);

int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        vector<int> v;
        
        v = deleteElement(arr,n,k);
        vector<int>::iterator it;
         for(it=v.begin();it!=v.end();it++)
            cout<<*it<<" ";
        cout<<endl;
        
    }
return 0;
}

// } Driver Code Ends


vector<int> deleteElement(int arr[],int n,int k)
{
    // complete the function
     vector<int> ans;
    stack<int> st;
    int count = 0;
    st.push(arr[0]);

    for (int i = 1; i < n; i++) {
        while (!st.empty() && count < k && st.top() < arr[i]) {
            st.pop();
            count++;
        }
        st.push(arr[i]);
    }

    
    while (!st.empty()) {
        ans.push_back(st.top());
        st.pop();
    }
reverse(ans.begin(),ans.end());

    return ans;
}
                                    