
#include <iostream>  
#include <vector>  
#include <algorithm>  
  
using namespace std;  
  
int main()
{
    cout<<"Enter the value of m ";
    int m;
    cin>>m;
    vector<int> v = {12, 4, 7, 9, 2, 23, 25, 41, 
30, 40, 28, 42, 30, 44, 48, 
43, 50} ;
    sort(v.begin(),v.end());
    int Min=INT32_MAX;
    for(int i=0;i<=v.size()-m;i++){
        Min=min(Min,v[i+m-1]-v[i]);
    }
    cout<<Min;
        return 0;
}
