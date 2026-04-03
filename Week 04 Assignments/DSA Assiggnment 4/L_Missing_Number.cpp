#include<iostream>
#include<vector>
using namespace std;
int main(){
    int num;
    cin>>num;
    for(int i=1;i<=num;i++){
        int size;
        cin>>size;
        vector<int> nums ;
        for(int i=0;i<size;i++){
            int x;
            cin>>x;
            nums.push_back(x);
        }
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans=ans^nums[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}