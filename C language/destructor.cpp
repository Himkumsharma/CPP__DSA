#include<iostream>
#include<conio.h>
using namespace std;
int count=0;
class test
{
    public:
    test()
    {
        count++;
        cout<<"object is created"<<count<<endl;
    }
    ~test()
    {
        cout<<"object is decleared"<<count;
        count--;
    }
};
    int main()
    {
        test d;
        
       return 0;
        
    }