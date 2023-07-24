//Error

#include<bits/stdc++.h>
using namespace std;


void rotateArr(int arr[], int d, int n){
        int temp[n];
            
        for(int i=0; i<n; i++)
        {
            temp[(i+d+1) % n] = arr[i];
        }
        arr = temp;
}


void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " " ;
    }
}

int main()
{
    int arr[9] = {1,0,3,5,0,6,0,0,8};

    rotateArr(arr, 2, 9);
    printArray(arr,9);
}