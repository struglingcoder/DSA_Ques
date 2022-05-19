#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n ";
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cout<<"enter "<<i+1<<" element";
        cin>>ar[i];
    }
    int l=0;
    int r=n-1;
    while(l<r){
        int temp=ar[l];
        ar[l]=ar[r];
        ar[r]=temp;
        l++;r--;
    }
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
        return 0;
}
