class Solution {
public:
    // int trap(vector<int>& height) {
    //     int sum=0;
    //     stack<int> s;
    //     int a=0;
    //     int n=height.size();
    //     vector<int> l(n,0);
    //     vector<int> r(n,0);
    //     for(int i=0;i<n;i++){
    //         for(int j=i+1;j<n;j++){
    //             a=max(a,height[j]);
    //             r[i]=a;
    //         }
    //         a=0;
    //     }
    //     for(int i=n-1;i>0;i--){
    //         for(int j=i-1;j>=0;j--){
    //             a=max(a,height[j]);
    //             l[i]=a;
    //         }
    //         a=0;
    //     }
    //     for(int i=0;i<n;i++){
    //         sum+=max(min(l[i],r[i])-height[i],0);
    //     }
    //     return sum;
       int trap(vector<int>& height) {
           int n=height.size();
           vector<int> l(n,0);
           vector<int> r(n,0);
           int a=0;
           int b=0;
           for(int i=0;i<height.size();i++){
               a=max(a,height[i]);
               l[i]=a;
               b=max(b,height[n-i-1]);
               r[n-1-i]=b;
           }
           int sum=0;
           for(int i=0;i<n;i++){
               sum+=max(min(l[i],r[i])-height[i],0);
           }
           return sum;
    }
};
