#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int num;
    cin>>num;
    for(int i=1;i<=num;i++){
        int n;
        // cout<<"Enter Num"<<endl;
        cin>>n;
        vector<int>ans={};
        vector<int>temp={};
        for(int i=1;i<=n;i++){
        if(i%2!=0){
            ans.push_back(i);
        }
        else{
            temp.push_back(i);
        }
       }
       for (int i = temp.size()-1; i >=0 ; i--)
       {
           ans.push_back(temp[i]);
       }
        for (auto x : ans)
        {
            cout << x << " ";
        }
        cout<<endl;
    }
    return 0;
}