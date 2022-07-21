class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> v(26,0);
        int l=0;
        int max_rep_count=0;
        int ans=0;
        int n=s.size();
        for(int r=0;r<n;r++){
            v[s[r] - 'A']++;
            max_rep_count=max(max_rep_count,v[s[r] - 'A']);
            while(r-l-max_rep_count+1>k){
                v[s[l]-'A']--;
                l++;
            }
            ans=max(ans,r-l+1);
        }
        return ans;
    }
};
