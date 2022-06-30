#include<bits/stdc++.h>
using namespace std;
bool Given_Sum_Pair(vector<int> v, int n, int sum) {
    int idx=0;
        for(int i=0;i<n-1;i++){
            if(v[i]>v[i+1]){
                idx=i;
                break;
            }
        }
        int l=idx+1;
        int r=idx;
        while(l!=r){
            if((v[l]+v[r])==sum){
                return true;
            }
            else if(v[l]+v[r]<sum){
                l=(l+1)%n;
            }
            else{
                r=(r-1)%n;
            }
        }
        return false;
}
int main()
{
    vector<int> v= {11, 15, 6, 7, 9, 10};
    int sum = 16;
    cout << Given_Sum_Pair(v, 6, sum);
    vector<int> v1= {11, 15, 26, 38, 9, 10};
    int sum1 = 35;
    cout << Given_Sum_Pair(v1, 6, sum1);
    vector<int> v2= {11, 15, 26, 38, 9, 10};
    int sum2 = 45;
    cout << Given_Sum_Pair(v2, 6, sum2);
    return 0;
}
