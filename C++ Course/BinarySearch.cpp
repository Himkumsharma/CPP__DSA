#include<iostream>
using namespace std;

int binarySearch (int arr[], int size, int key ) {
    
    int start =0;
    int end= size-1;

    int mid= (start+ (end-start/2));

    while(start<= end) {

        if(arr[mid] = key) {
            return mid;
        }

        //go to right wala part 
        if(key > arr[mid]) {
            start = mid + 1;
        }
        else{
            end= mid -1;
        }
        mid= (start+ (end-start/2));
    }
}


int main() {
    
    int even[8] ={2,4,6,8,10,12,14,16};
    int odd[5] = {3,5,7,9,11};

    int evenindex = binarySearch(even, 8, 20);

    cout<<"index of 16 is " << evenindex <<endl;

    int oddindex = binarySearch(odd, 5, 11);

    cout<<"index of 9 is " << oddindex <<endl;



    
    return 0;
}