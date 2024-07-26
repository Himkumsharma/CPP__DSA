#include<iostream>
using namespace std;

    // function signature
 void printcounting( int n) { 
    
    // function body
    for (int i=1; i<=n; i++) {
       cout<< i << " " ;

 }
   cout<<endl;

   }

int main() {

    int n;
    cin >> n;
    

    // function call
    printcounting(n);

    return 0;
}
