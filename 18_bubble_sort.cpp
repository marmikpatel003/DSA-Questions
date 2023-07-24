#include<bits/stdc++.h>
using namespace std;

int bubbleSort(int arr[], int n)
{
    for(int i = 1; i < n-1; i++) //For rounds
    {
        bool swapped = false;
        for(int j=0; j < n-i; j++) //For processing elements till n-i
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false)
        {
            break;
        }
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
    bubbleSort(arr, n);
    printArray(arr, n);
    return 0;
}