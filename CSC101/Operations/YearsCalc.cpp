#include<iostream>

using namespace std;
int main()
{
    int d,m,y;
    cout<<"enter the number the days:";
    cin>>d;

    y=d/365;
    m=(d%365)/30;
    d=(d%365)%30;

    cout<<"number of years:"<<y<<endl;
    cout<<"number of months:"<<m<<endl;
    cout<<"number of days:"<<d<<endl;
    return 0;
}

