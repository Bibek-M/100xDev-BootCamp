#include <iostream>
#include <vector>
#include <numeric>
// #include<climits>
using namespace std;
int main()
{
    // int n=6;
    // vector<int> vec = {7,3,4,5,3,10};
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    int mini =vec[0];
    for(int i=1;i<n;i++){
        if(vec[i]<mini ){
            mini=vec[i];
        }
    }
    int pos=0;
    for(int i=0;i<n;i++){
        if(vec[i]==mini){
            pos=i+1;
            break;
        }
    }
    cout<<mini<<" "<<pos;
    return 0;
}