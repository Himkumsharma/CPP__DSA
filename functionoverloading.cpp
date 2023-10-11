#include<iostream>
#include<conio.h>
using namespace std;
int calc (int,int);
int calc (int);
int main()
{
    int a,b,s;
    cout<<"Enter the two no\n";
    cin>>a>>b;
    cout<<"Sum of two no="<<calc(a,b)<<endl;
    cout<<"Enter the side=";
    cin>>s;
    cout<<"Area of squre is="<<calc(s);
    return 0;
}
int calc(int x,int y)
{
    return(x+y);
}
int calc(int x)
{
    return(x*x);
}