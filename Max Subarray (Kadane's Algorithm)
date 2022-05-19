class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                c++;
            }
        }
        int Max=INT32_MIN;
        for(int i=0;i<nums.size();i++){
            Max=max(nums[i],Max);
        }
        if(c==nums.size()){
            return Max;
        }
    int cur_sum=0;
    int max_sum=0;
    for(int i=0;i<nums.size();i++){
        cur_sum+=nums[i];
        if(cur_sum>max_sum){
            max_sum=cur_sum;
        }
        if(cur_sum<0){
            cur_sum=0;
        }
    }
    return max_sum;
    }
};
