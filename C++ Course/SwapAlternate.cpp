#include<iostream>
using namespace std;

void printArray(int arr[], int n) {

    for(int i=0; i<n; i++) {
        cout<< arr[i] <<" ";
    } 
    cout<<endl;
}

void Alternateswap(int arr[], int size){
    for(int i=0; i<size; i+=2 ){

        if(i+1 < size) {
            swap(arr[i] , arr[i+1]);
        }
    }
}


int main() {
    
    int even [8]= {5,9,8,6,4,2,3,12};
    int odd[5]= {3,5,75,43,49};

    Alternateswap(even , 8);
    printArray(even, 8);

    cout<<endl;

     Alternateswap(odd , 5);
    printArray(odd, 5);




    return 0;
}