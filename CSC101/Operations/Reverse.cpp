#include<iostream>

using namespace std;
int main()
{
    int x,a,A,b,c;
    cout<<"Enter any 3-digit number=";
    cin>>x;

    a=x/10;
    A=x%10;
    b=a%10;
    c=a/10;

    cout<< "The reserve value of the input is="<<A<<b<<c<<endl;
    return 0;
}

