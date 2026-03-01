#include<iostream>
using namespace std;
int main(){
    long long int n;
    // cout<<"Enter n"<<endl;
    cin>>n;
    int i;
    int count=0;
    if(n==0){
        count=1;
    }
    while(n!=0){
        i=n%10;
        if(i==0){
            count++;
        }
        n/=10;
    }
    cout<<count<<endl;
}