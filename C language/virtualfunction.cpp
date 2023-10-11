#include<iostream>
using namespace std;
class A
{
    public:
void show()
{
    cout<<"hello base class";
}
};
class B:public A{
    public:
    void show()
{
cout<<"Hello derived class";

}};
