#include <iostream>
using namespace std;

int main()
{
    long long int n;
    cout<<"Enter a Number"<<endl;
    cin>>n;
    int sum=0;
    while(n!=0){
        sum+= n%10;
        n/=10;
    }
    cout<<sum;
    return 0;
}