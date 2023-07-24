#include<bits/stdc++.h>
using namespace std;

void moveZeroes(int arr[], int size){
    int i=0;
    for(int j=0; j<size; j++){
        if(arr[j] !=0)
        {
            swap(arr[j], arr[i]);
            i++;
        }
    }
}

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " " ;
    }
}

int main()
{
    int arr[9] = {1,0,3,5,0,6,0,0,8};

    moveZeroes(arr, 9);
    printArray(arr,9);
}