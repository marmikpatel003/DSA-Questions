#include<bits/stdc++.h>
using namespace std;

int selectionSort(int arr[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        int minIndex = i;
        for(int j= i+ 1; j < n; j++)
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
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
    selectionSort(arr, n);
    printArray(arr, n);
    return 0;
}