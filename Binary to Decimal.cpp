#include<bits/stdc++.h>
using namespace std;
int main(){
    int b;
    cin>>b;
    int s=0;
    int i=0;
    vector<int> v;
        while(b>0) 
        {
            int c=b%10;
            s+=c*pow(2,i);
            b/=10;
            i++;
        }
        cout<<s;  
        return 0;
}
