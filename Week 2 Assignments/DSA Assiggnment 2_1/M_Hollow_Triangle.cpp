#include<iostream>
using namespace std;
int main(){
    int n;
    // cout<<"Enter nums"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
            
        }
        for(int j=0;j<=i;j++){
            if(i==0 || i==1 || i==n-1 || j==i || j==0){
            cout<<"*";
            }
            else{
                cout<<" ";
            }
            if(j!=i)cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}