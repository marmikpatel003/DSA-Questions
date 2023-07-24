#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[low];
    int i=low;
    int j=high;
    while(i<j)
    {
        while(arr[i] <= pivot && i<high)
        {
            i++;
        }

        while(arr[j] > pivot && i>=low)
        {
            j--;
        }

        if(i<j) swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

void qS(vector<int> &arr, int low, int high)
{
    if(low<high)
    {
        int pIndex = partition(arr,low,high);
        qS(arr,low,pIndex-1);
        qS(arr,pIndex+1,high);
    }
}

void quickSort(vector<int> &arr, int n)
{
    qS(arr,0,n-1);
}

int main()
{
    int n;
    int a;
    cout << "Enter Array Size : ";
    cin >> n;
    vector<int> arr;
    for(int i=0; i<n; i++)
    {
        cout << "Enter " << i << " Element: ";
        cin >> a;
        arr.push_back(a);
    }
    quickSort(arr, n);
    for(auto &p : arr)
    {
        cout<<p<<" ";
    }
}