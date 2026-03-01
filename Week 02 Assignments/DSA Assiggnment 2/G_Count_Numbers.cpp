#include <iostream>
using namespace std;
int main()
{
    int n;
    // cout << "enter number of int" << endl;
    cin >> n;
    int m;
    int pos=0;
    int neg=0;
    int even=0;
    int odd=0;
    for (int i = 1; i <= n; i++)
    {
        // cout << "Enter number "<<i<< endl;
        cin>>m;
        if(m>0){
            pos++;
        }
        if(m<0){
            neg++;
        }
        if(m%2==0){
            even++;
        }
        if(m%2!=0){
            odd++;
        }
    }
    cout<<pos<<endl;
    cout<<neg<<endl;
    cout<<even<<endl;
    cout<<odd<<endl;
}