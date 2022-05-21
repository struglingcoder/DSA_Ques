#include<bits/stdc++.h>
using namespace std;
int main(){
        for (int i = 1; i <=5; i++) 
        {
            for(int k=1;k<=i;k++){
                cout<<"*";
            }
            for(int j=2*(5-i+1);j>2;j--){
                cout<<" ";
            }
            for(int k=1;k<=i;k++){
                cout<<"*";
            }
            cout<<endl;
        }  
        for (int i = 5; i >=1; i--) 
        {
            for(int k=1;k<=i;k++){
                cout<<"*";
            }
            for(int j=2*(5-i+1);j>2;j--){
                cout<<" ";
            }
            for(int k=1;k<=i;k++){
                cout<<"*";
            }
            cout<<endl;
        }      
        return 0;
}
