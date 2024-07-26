#include<iostream>
using namespace std;

int getMax(int num[], int n) {

    int max = INT16_MIN; 

    for(int i=0; i<n; i++) {
        if(num[i] >max) {
            max = num [i];
        }
    }

    //returning Max Value

    return max;
}

int getmIN(int num[], int n) {

    int min =INT16_MAX; 

    for(int i=0; i<n; i++) {
        if(num[i] < min) {
            min = num [i];
        }
    }
    //returning Min Value
    return min;
}

int main(){

    int size;
    cin >> size;

    int num[100];

    for(int i=0; i<size; i++) {
        cin >> num[i];
    }

    cout <<"Maximum Value is" << getMax(num , size) << endl;
    cout <<"Minimum Value is" << getmIN(num , size) << endl;


    return 0;
}