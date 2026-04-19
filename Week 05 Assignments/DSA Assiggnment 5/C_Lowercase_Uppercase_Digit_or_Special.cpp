#include <iostream>
using namespace std;
int main()
{
    char ch;
    cin >> ch;
    int val= int(ch);
    // cout<<val;
    if(val>=97 && val<=122){
        cout << "Lowercase";
    }
    else if(val<=97 && val>=65){
        cout << "Uppercase";
    }
    else if(val>=48 && val<=57){
        cout<<"Digit";
    }
    else{
        cout << "Special";
    }
    return 0;
}