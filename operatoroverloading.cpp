#include<iostream>
#include<conio.h>
using namespace std;
class demo{
    int a;
    public:
    void getdata(){
        cout<<"Enter the no=";
        cin>>a;
    }
    void putdata(){
        cout<<"in value="<<a;
    }
    demo operator+(demo bb){
        demo cc;
        cc.a=a+ bb.a;
        return cc;
    }

};
int main()
{
    demo aa,bb,cc;
    aa.getdata();
    bb.getdata();
    cc.getdata();
    cc=aa+bb;
    aa.putdata();
    bb.putdata();
    cc.putdata();
    return 0;
}