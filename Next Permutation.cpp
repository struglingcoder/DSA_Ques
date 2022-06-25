class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int ifx=-1;
        int n=nums.size()-1;
        if(n==0){
            return;
        }
        if(n==1){
            swap(nums[0],nums[1]);
            return;
        }
        for(int i=n;i>0;i--){
            if(nums[i]>nums[i-1]){
                ifx=i-1;
                break;
            }
        }
        int Min=INT_MAX;
        int to_swap=nums[ifx+1];
        if(ifx==-1){
            sort(nums.begin(),nums.end());
            return;
        }
        else{
            for(int i=ifx+1;i<=n;i++){
                if(nums[i]-nums[ifx]>0 && nums[i]-nums[ifx]<Min){
                    to_swap=i;
                    Min=nums[i]-nums[ifx];
                }
            }
            swap(nums[ifx],nums[to_swap]);
            sort(nums.begin()+ifx+1,nums.end());
            return;
        }
        return;
    }
};
