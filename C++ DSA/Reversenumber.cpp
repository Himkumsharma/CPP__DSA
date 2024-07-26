#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;



    int temp = n;

    int rem;

    int count = 0;
    while (temp > 0)
    {
        rem = temp % 10;
       count++;
        temp = temp / 10;
    }

    cout<<count;
     
    return 0;
}
