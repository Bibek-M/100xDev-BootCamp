#include<iostream>
using namespace std;
void hello(int &n){
    for(int i=0;i<n;i++){
        cout << "I am learning functions" << endl;
    }
}
int main(){
    int n;
    // cout<<"Enter a num"<<endl;
    cin>>n;
    hello(n);
    return 0;
}