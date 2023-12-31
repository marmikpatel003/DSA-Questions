#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int s, int e, int key)
{
    int start = s;
    int end = e;
    int mid = start + (end-start) / 2;

    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }
        if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }

        mid = start + (end-start) / 2;
    }

    return -1;
}

int findPivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e-s)/2;

    while(s<e)
    {
        if(arr[mid] >= arr[0]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}


int main()
{
    int arr[5] = {7,9,1,2,3};
    int k = 2;
    int n = 5;
    int pivot = findPivot(arr, 5);

    if(k >= arr[pivot] && k < arr[n - 1])
    {
        cout << binarySearch(arr, pivot, n-1, k);
    }
    else{
        cout << binarySearch(arr, 0, pivot - 1, k);
    }
}