#include<bits/stdc++.h>
using namespace std;

int firstOccurrence(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int ans = -1;
    int mid = start + (end-start) / 2;

    while(start <= end){
        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }

        mid = start + (end-start) / 2;
    }

    return ans;
}

int lastOccurrence(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int ans = -1;
    int mid = start + (end-start) / 2;

    while(start <= end){
        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }

        mid = start + (end-start) / 2;
    }

    return ans;
}

int  main()
{
    int even[8] = {1,2,3,4,4,5,6,7};

    cout << "First Occurrence is at Index " << firstOccurrence(even, 8, 4) << endl;
    cout << "Last Occurrence is at Index " << lastOccurrence(even, 8, 4);

    return 0;
}