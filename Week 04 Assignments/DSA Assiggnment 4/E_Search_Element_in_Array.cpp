#include<iostream>
#include<vector>
using namespace std;
int main(){
    //test
    // vector<int>vec={1,4,3,7};
    // int n=4;
    // int x=2;
    int n;
    cin>>n;
    vector<int>vec(n);
    int x;
    cin>>x;
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    for(int i=0;i<n;i++){
        if(vec[i]==x){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}