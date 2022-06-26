vector<int> Solution::repeatedNumber(const vector<int> &A) {
    int dup,mis;
    int n1=A.size();
    vector<int> v(n1+1,0);
    for(int i=0;i<n1;i++){
        v[abs(A[i])-1]+=1;
        if(v[abs(A[i])-1]==2){
            dup=abs(A[i]);
        }
    }
    for(int i=0;i<n1;i++){
        if(v[i]==0){
            mis=i+1;
            break;
        }
    }
    return {dup,mis};
}
