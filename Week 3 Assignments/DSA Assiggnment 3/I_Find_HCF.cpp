#include<iostream>
using namespace std;
int main(){
    int a;
    // cout<<"Enter a"<<endl;
    cin>>a;
    int b;
    // cout<<"Enter b"<<endl;
    cin>>b;
    int hcf=1;
    int i=1;
    // int j=0;
    while(i<=a && i<=b){
        if(a%i==0 && b%i==0 && i>hcf){
            hcf=i;
            i++;
        }
        else{
            i++;
        }
    }
    cout<<hcf<<endl;
}