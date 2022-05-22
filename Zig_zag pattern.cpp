#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
        for (int i = 1; i <=3; i++) 
        {
            for(int k=1;k<=n;k++){
                if((i+k)%4==0){
                    cout<<'*';
                }
                else if((i+k)%2==0 && i==2){
                    cout<<'*';
                }
                else{
                    cout<<' ';
                }
            }
            cout<<endl;
            }      
        return 0;
}
