// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}// } Driver Code Ends

pair<long long, long long> getMinMax(long long a[], int n) {
    pair<long long, long long> p;
    if(n==1){
        p.first=a[0];
        p.second=a[0];
        return p;
    }
    long long mx=a[0];
    long long mn=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>mx){
            mx=a[i];
        }
        if(mn>a[i]){
            mn=a[i];
        }
    }
    p.first=mn;
    p.second=mx;
    return p;
}
