#include<iostream>

using namespace std;
int main()
{
    int l,b,area,perimeter;
    cin>>l>>b;

    area=l*b;
    perimeter=2*(l+b);

    cout<<"Area of the rectangle="<<area<<endl;
    cout<<"Perimeter of the rectangle="<<perimeter<<endl;

    return 0;
}
