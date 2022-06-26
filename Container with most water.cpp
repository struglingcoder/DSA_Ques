class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=0;
        int l=0;
        int n=height.size()-1;
        while(l<n){
            if(height[l]<=height[n]){
                int ar=(n-l)*height[l];
                ans=max(ans,ar);
                l++;
            }
            else{
                int ar=(n-l)*height[n];
                ans=max(ans,ar);
                n--;
            }
        }
        return ans;
    }
};
