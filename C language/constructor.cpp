#include<iostream>
#include<conio.h>
using namespace std;
class test
{
    int a,b;
    public:
    test()
    {
        a=5;
        b=6;
    }
    void disp()
    {
        cout<<"value of a="<<a;
        cout<<"value of b="<<b;
        
    }
};
int main()
{
    test t;
    t.disp(); 
    return 0;
}