#include<bits/stdc++.h>
using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter Array Size : ";
//     cin >> n;
//     int arr[n];
//     for(int i=0; i<n; i++)
//     {
//         cout << "Enter " << i << " Element: ";
//         cin >> arr[i];
//     }

//     int hash[13] = {0};
//     for(int i=0; i<n; i++)
//     {
//         hash[arr[i]] += 1;
//     }

//     int q;
//     cout << "Enter How Many Numbers You Want to Count: ";
//     cin >> q;
//     while(q--)
//     {
//         int number;
//         cout << "Enter Number: ";
//         cin >> number;
//         cout << "Count of " << number << " Is:" << hash[number] << endl;
//     }
    
//     return 0;
// }

//With Map STL
int main()
{
    int n;
    cout << "Enter Array Size : ";
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cout << "Enter " << i << " Element: ";
        cin >> arr[i];
    }

    map<int, int> mpp;
    for(int i=0; i<n; i++)
    {
        mpp[arr[i]]++;
    }

    int q;
    cout << "Enter How Many Numbers You Want to Count: ";
    cin >> q;
    while(q--)
    {
        int number;
        cout << "Enter Number: ";
        cin >> number;
        cout << "Count of " << number << " Is:" << mpp[number] << endl;
    }
    
    return 0;
}