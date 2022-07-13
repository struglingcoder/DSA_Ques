class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        vector<int> v1(256,0);
        for(int i=0;i<s.size();i++){
            v1[s[i]]++;
            v1[t[i]]--;
        }
        for(int i=0;i<s.size();i++){
            if(v1[s[i]]!=0){
                return false;
            }
        }
        return true;
    }
};
