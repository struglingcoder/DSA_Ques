// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends
class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
       int n=S.size();
       string ans="";
       if(n<1){
           return ans;
       }
       int l=0;
       ans=S[l];
       for(int i=1;i<n;i++){
           if(S[i]!=S[l]){
               ans+=S[i];
               l=i;
           }
       }
       return ans;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.removeConsecutiveCharacter(s)<<endl;
    }
} 



  // } Driver Code Ends
