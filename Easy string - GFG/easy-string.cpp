//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
string transform(string s);

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << transform(s) << endl;
    }
return 0;
}


// } Driver Code Ends


string transform(string S){
    //complete the function here
    int n=S.size();
       transform(S.begin(),S.end(),S.begin(), ::tolower);
  string ch = string(1,S[0]);
  int count = 1;
stack<string> st;
for(int i=1;i<n;i++){
    string temp = string (1,S[i]);
    if(temp==ch){
        count++;
    }else{
        string temp2 = to_string(count);
        reverse(temp2.begin(),temp2.end());
        st.push(temp2);
        st.push(ch);
        count = 1;
        ch = temp;

    }
}
if(count>=1){
     string temp2 = to_string(count);
        reverse(temp2.begin(),temp2.end());
    st.push(temp2);
    st.push(ch);
}
string ans;
while(!st.empty()){
    ans +=st.top();
    st.pop();
}
reverse(ans.begin(),ans.end());
return ans;
}

