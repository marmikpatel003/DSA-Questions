#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n)
{
    for(int i=0; i<=n-2; i++)
    {
        int mini=i;
        for(int j=i; j<=n-1; j++)
        {
            if(arr[j] < arr[mini])
            {
                mini=j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
        // swap(arr[i], arr[mini]);
    }
}

void bubble_sort(int arr[], int n)
{
    for(int i=n-1; i>=0; i--)
    {
        int didSwap=0; //For Optimality(If Loop is already sorted it will break)
        for(int j=0; j<=i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                didSwap=1;
            }
        }
        if(didSwap == 0)
        {
            break;  //If Loop is already sorted it will break
        }
    }
}

void insertion_sort(int arr[], int n)
{
    for(int i=0; i<=n-1; i++)
    {
        int j=i;
        while(j>0 && arr[j-1]>arr[j])
        {
            swap(arr[j], arr[j-1]);
            j--;
        }
    }
}


int main()
{
    int n;
    cout << "Enter Array Size : ";
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cout << "Enter " << i+1 << " Element: ";
        cin >> arr[i];
    }
    insertion_sort(arr,n);
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
