class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        vector<int> v(256,-1);
        int ans=0;
        int l=0;
        int r=0;
        while(r<s.size()){
            if(v[s[r]]!=-1){
                l=max(l,v[s[r]]+1);
            }
            ans=max(ans,r-l+1);
            v[s[r]]=r;
            r++;
        }
        return ans;
    }
};
