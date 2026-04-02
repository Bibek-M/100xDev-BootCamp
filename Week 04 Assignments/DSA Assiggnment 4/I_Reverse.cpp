#include<iostream>
#include<vector>
using namespace std;
int main(){
    int ni;
    cin>>ni;
    vector<int>nums={};
    for(int i=0;i<ni;i++){
        int num;
        cin>>num;
        nums.push_back(num);
    }
    int i=0;
    int n=nums.size();
    int j=n-1;
    while(i<j){
        swap(nums[i],nums[j]);
        i++;
        j--;
    }
    for(auto x: nums){
        cout<<x <<" ";
    }
    return 0;
}