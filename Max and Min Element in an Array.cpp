#include<iostream>
#include<vector>
#include<map>
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
    int Min=INT32_MAX;
    int Max=INT32_MIN;
    for(int i=0;i<n;i++){
        Min=min(ar[i],Min);
        Max=max(ar[i],Max);
    }
    cout<<"The minimum value element is --> "<<Min<<endl;
    cout<<"The maximum value element is --> "<<Max<<endl;
        return 0;
}
