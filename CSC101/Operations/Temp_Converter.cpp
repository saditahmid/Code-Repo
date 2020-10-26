#include<iostream>

using namespace std;
int main()
{
    float F,C,K;
    cout<<"enter any temperature in Fahrenheit=";
    cin>>F;

    C=5.0/9*(F-32);
    K=5.0/9*(F-32)+273.15;

    cout<<"Temperature in Celcius:"<<C<<endl;
    cout<<"Temperature in Kelvin:"<<K<<endl;
    return 0;
}

