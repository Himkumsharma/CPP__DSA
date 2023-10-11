#include<iostream>
#include<conio.h>
using namespace std;
int a=200; 

int main()
{
    a=300;
    cout<<"value of a is "<<a<<endl;

    cout<<"value of a is "<<::a;
getch();
return 0;

}