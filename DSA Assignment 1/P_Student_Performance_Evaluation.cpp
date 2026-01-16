#include<iostream>
using namespace std;
int main(){
    int mark;
    cin>>mark;
    if(mark>90){
        cout<<"Excellent";
    }
    else if (mark > 80 && mark<=90)
    {
        cout << "Good";
    }
    else if (mark > 70 && mark <= 80)
    {
        cout << "Fair";
    }
    else if (mark > 60 && mark <= 70)
    {
        cout << "Meets Expectations";
    }
    else{
        cout<<"Below Par";
    }
}