#include<iostream>
using namespace std;

void reverse(int arr[], int n){
    int start = 0;
    int end = n-1;

    while(start<= end) {
        swap(arr[start], arr[end]);
        start++;
        end--;

    }
}

void printArray (int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout<< arr[i] << "  ";
    }
    cout <<endl;
}


int main() {

    int arr[8]= {5,9,2,4,5,4,2,5};
    int brr[5]= {7,5,6,4,2};

    reverse(arr,8);
    reverse(brr,5);

    printArray (arr,8);
    printArray (brr,6);


    return 0;
}