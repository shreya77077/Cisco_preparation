#include<iostream>
using namespace std;

void traverseArray(int arr[], int N){
    for(int i = 0; i < N; i++){
        cout<< arr[i]<< ' ';
    }
}

int main(){

    int arr[] = {1,2,3,4};
    int N = sizeof(arr)/sizeof(arr[0]);

    traverseArray(arr,N);


    // return 0;
}

