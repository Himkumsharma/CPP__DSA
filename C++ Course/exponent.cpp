#include<iostream>
using namespace std;

long long power(long long a, long long b) {
//base case
if(b == 0) 
    return 1;

if(b == 1)
    return a;

//Recursive call
 int ans = power(a,b/2);

// if b is even
if(b%2 == 0) {
    return ans * ans;
}   
else {
    //if b is odd
    return a * ans * ans;
   }

}

int main() {
    
    long long a, b;
    cin >> a >> b ;

    long long ans = power(a,b);

    cout<<"Answer is " <<  ans  << endl;
    
    return 0;

}