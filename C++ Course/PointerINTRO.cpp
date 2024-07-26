#include<iostream>
using namespace std;

int main() {
     
     int num = 5;

     cout << num << endl;

     // address of operator - &

     cout <<" address of num is " << &num << endl;

     int *ptr = &num;

     cout << " Address is: " << ptr << endl;

     cout << " value is: " << *ptr << endl;

     double d = 4.5;
     double *p2 = &d;

     cout << " Address is: " << p2 << endl;

     cout << " value is: " << *p2 << endl;


     int *p = &num;
     cout << " before " << num << endl;
     (*p)++;
     cout << " After  " << num << endl;

     //copying a pointer
     int *q = p;
     cout << p << " _ " << q << endl;
     cout << *p << " _ " << *q << endl;

     //important concept 
     int i = 3;
     int *t = &i;
    //cout << (*t)++ << endl;
    *t = *t +1;

     cout << *t << endl;
     cout <<" before t " << t << endl;
     t = t + 1;
     cout << " after t " << t << endl;
       

       return 0;

}