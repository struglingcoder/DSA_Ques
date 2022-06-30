class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int idx1=-1;
        int idx2=0;
        int n=nums.size();
        for(int i=n-1;i>=1;i--){
            if(nums[i]>nums[i-1]){
                idx1=i-1;
                break;
            }
        }
        if(idx1==-1){
            sort(nums.begin(),nums.end());
            return;
        }
        int Min=INT_MAX;
        for(int j=idx1+1;j<n;j++){
            if(nums[j]>nums[idx1] && nums[j]<Min){
                idx2=j;
                Min=nums[j];
            }
        }
        swap(nums[idx1],nums[idx2]);
        sort(nums.begin()+idx1+1,nums.end());
        return;
    }
};
