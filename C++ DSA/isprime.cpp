#include<iostream>
using namespace std;

// 1 -> Prime no.
// 0 -> N0t a prime no.
bool isprime( int n) {
   
   for( int i=2; i<n; i++)
   {
    // divide hogya h, not a prime no.
    if(n%i == 0){
        return 0;
    }
   }
   return 1;
}

int main() {

   int n;
   cin>> n;
   if (isprime (n)) {
   cout<<"is a prime no." <<endl;
   
   }
   else {
    cout <<" Not a prime no"<< endl;
   }

   }


