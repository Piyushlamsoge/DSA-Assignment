

#include<iostream>
using namespace std;

int main() {
    int x  , y , temp;
    
    cout<<"enter the value of x :";
    cin>>x;
    cout<<"enter the value of y :";
    cin>>y;
    


    cout<<"Before swapping."<<endl;
    cout<<"X ="<<x<<" , Y ="<<y<<endl;

    temp = x;
    x = y;
    y = temp;

    cout<<"After swapping."<<endl;
    cout<<"X ="<<x<<" , Y ="<<y<<endl;

    return 0;
}
