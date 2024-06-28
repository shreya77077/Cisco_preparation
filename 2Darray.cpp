#include<iostream>
using namespace std;

const int N = 2;
const int M = 2;

void traverse2DArray(int arr[][M],int N){
    for(int i =0;i<N;i++){
        for(int j=0; j<M;j++){
            cout<<arr[i][j] << ' ';
        }
        cout<<endl;

    }
}

int main(){
    int arr[][M]={{1,2},{3,4}};
    traverse2DArray(arr,N);

    return 0;
}
