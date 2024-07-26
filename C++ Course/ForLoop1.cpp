#include<iostream>
using namespace std;

int main()
{
      int n;
      cout<<"Enter the value of n"<<endl;
      cin>>n;
       

    int sum =0;

    for( int i=1; i<=n; i++){
    //sum=sum+i;
     sum += i;
    }
    cout<< sum <<endl;

}


// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;

//     int i=1;

//     while (i<=n)
//     {
//         int j =1 ;
//         while (j<=n)
//         {
//             cout<<"*";
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
        
//     }
    

// }