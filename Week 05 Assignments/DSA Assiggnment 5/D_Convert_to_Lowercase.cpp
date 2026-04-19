#include <iostream>
using namespace std;
int main()
{
    char ch;
    cin >> ch;
    if(ch>'Z'){
        cout<<ch;
    }
    else{
        cout << char(ch+32);
    }
    return 0;
}