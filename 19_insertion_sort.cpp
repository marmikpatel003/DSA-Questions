#include<bits/stdc++.h>
using namespace std;

int insertionSort(int arr[], int n)
{
    for(int i = 1; i < n; i++) //For rounds
    {
        int temp = arr[i];
        int j = i-1;
        for(; j>=0; j--)
        {
            if(arr[j] > temp)
            {
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
}

void printArray(int arr[], int size)
{
    for (int i=0; i < size; i++)
    {
      cout << arr[i] << " ";
      cout << endl;
    }
}

int main()
{
    int arr[] = {1,4,7,2,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr, n);
    printArray(arr, n);
    return 0;
}