#include<iostream>
using namespace std;
int main()
{

int n;
cout<<"Enterr the value of n"<<endl;
cin>>n;

bool isPrime =1;

for (int i = 2; i <n; i++)
{
    /* rem=o not a prime no */
    if(n%i == 0) {
       cout<<"Not a Prime no"<<endl;
       isPrime = 0;
       break;
     }
 
}
 
 if(isPrime == 0){
   cout<<"Not a prime no"<<endl;
 }
 else{
    cout<<"is a prime no"<<endl;
 }
 }









