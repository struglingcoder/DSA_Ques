
#include <iostream>  
#include <vector>  
#include <algorithm>  
  
using namespace std;  
  
int main()
{
    cout<<"Enter the value of m ";
    int m;
    cin>>m;
    vector<int> v = {12, 4, 7, 9, 2, 23, 25, 41, 
30, 40, 28, 42, 30, 44, 48, 
43, 50} ;
    sort(v.begin(),v.end());
    int Min=INT32_MAX;
    for(int i=0;i<=v.size()-m;i++){
        Min=min(Min,v[i+m-1]-v[i]);
    }
    cout<<Min;
        return 0;
}

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    long long ans=INT_MAX;
    sort(a.begin(),a.end());
    ans=min(ans,abs(a[m-1]-a[0]));
    for(int i=m;i<n;i++){
        ans=min(ans,abs(a[i]-a[i-m+1]));
    }
    return ans;
    }   
};

// { Driver Code Starts.
int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		long long m;
		cin>>m;
		Solution ob;
		cout<<ob.findMinDiff(a,n,m)<<endl;
	}
	return 0;
}  // } Driver Code Ends
