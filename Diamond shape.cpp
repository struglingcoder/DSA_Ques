#include<bits/stdc++.h>
using namespace std;
int main(){
        for (int i = 1; i <=5; i++) 
        {
            for(int j=5-i;j>=0;j--){
                cout<<" ";
            }
            for(int k=i;k>=1;k--){
                cout<<'*';
            }
            for(int l=2;l<=i;l++){
                cout<<'*';
            }
            cout<<endl;
        }
        for (int i = 5; i >=1; i--) 
        {
            for(int j=5-i;j>=0;j--){
                cout<<" ";
            }
            for(int k=i;k>=1;k--){
                cout<<'*';
            }
            for(int l=2;l<=i;l++){
                cout<<'*';
            }
            cout<<endl;
        }
        return 0;
}
