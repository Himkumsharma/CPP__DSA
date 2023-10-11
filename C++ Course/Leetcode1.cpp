#include<iostream>
using namespace std;

int main(){}
class Solution {
    public:
    int subtractproductAndsum(int n){
        int prod =1;
        int sum=0;

        while (n!=0)
        {
            /* code */
            int digit = n%10;
            prod=prod*digit;

            n=n/10;

        }
        int answer=prod-sum;
        return answer;
        

    }


};

