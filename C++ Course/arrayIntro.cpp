#include<iostream>
using namespace std;
 

void printArray (int arr[] , int size) {
    
    cout<<" printing the array " <<endl;
    //Print the Array

     for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
     }
     cout <<"Printing Done" << endl;
    
}


int main() {

    //declare
    int number[15];

    //accessing an array
    cout<<"Value at 15 index "<< number[13] << endl;

    cout<<"Value at 20 index "<< number[20] << endl;

    //initialising an array
    int second[3] = {5,7,11};

    //accessing an element
    cout <<"Value at 2 index " << second[2] << endl;

    int third [15] = {2,7};

    int n = 15;

    //Print the Array
   printArray (third, 15);

   
    int fourth[20]= {0};
    n =20;
    
    //Print the Array
   printArray(fourth, 20);
    
  // initialising all locations with 1 [ Not possible with below line]
    int fifth[21]= {1};
    n =21;
    
    //Print the Array
   printArray(fifth, 21);







    cout << endl <<"Everything is fine"<< endl << endl;

    return 0;

}