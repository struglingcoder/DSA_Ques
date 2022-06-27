#include<bits/stdc++.h>
using namespace std;
int pallindrome(vector<int>& nums) {
        int c=0;
        int n=nums.size();
        if(n==1){
            return 0;
        }
        int l=0;
        int r=n-1;
        while(l<r){
            if(nums[l]==nums[r]){
                l++;r--;
            }
            else if(nums[l]>nums[r]){
                nums[r-1]+=nums[r];
                c++;r--;
            }
            else{
                nums[l+1]+=nums[l];
                l++;c++;
            }
        }
        return c;
}
int main()
{
    vector<int> v = {15, 4, 15};
    cout<<pallindrome(v)<<" ";
    vector<int> v1 = {1, 4, 5, 1};
    cout<<pallindrome(v1)<<' ';
    vector<int> v2 = {11, 14, 15, 99};
    cout<<pallindrome(v2)<<' ';
    return 0;
}
