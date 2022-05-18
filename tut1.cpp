#include<iostream>
#include<vector>
#include<map>
using namespace std;

class ans{
    public:
    vector<int> twosum(vector <int>& nums, int target){
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            if(m.count(target-nums[i])>0){
                return {m[target-nums[i]],i};
            }
                m[nums[i]]=i;
        }
        return {-1,-1};
    }
    
};

int main()
{
    cout<<"Enter the value of n";
    int target;
    vector <int> nums;
    vector <int> ans1;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cout<<"Enter "<<n<<" elements one by one";
        cin>>a;
        nums.push_back(a);
    }
    cout<<"Enter the target value--> ";
    cin>>target;
    ans obj;
    ans1= obj.twosum(nums, target);

    cout<<ans1[0]<<"  "<<ans1[1];

    


        return 0;
}