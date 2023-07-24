#include<bits/stdc++.h>
using namespace std;

int printArray(int arr[], int size)
{
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}

int swapAlternate(int arr[], int size)
{
    for(int i=0; i<size; i+=2){
        if(i+1 < size)
        {
            swap(arr[i], arr[i+1]);
        }
    }
}


int main()
{
    int even[4] = {1,2,3,4};
    int odd[3] = {1,2,3};

    swapAlternate(even, 4);
    printArray(even, 4);

    cout << endl;

    swapAlternate(odd, 3);
    printArray(odd, 3);

}