class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
       sort(intervals.begin(),intervals.end());
        int n=intervals.size();
        int l=INT_MIN;
        vector<vector<int>> ans;
        if(n==0){
            return ans;
        }
        vector<int> curr=intervals[0];
        for(int i=1;i<n;i++){
            if(curr[1]<intervals[i][0]){
                ans.push_back(curr);
                curr = intervals[i];
            }
            else{
                curr[1]=max(curr[1],intervals[i][1]);
            }
        }
        ans.push_back(curr);
        return ans;
    }
};
