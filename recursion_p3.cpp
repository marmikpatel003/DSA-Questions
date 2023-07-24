#include<bits/stdc++.h>
using namespace std;

void reverseArray(int i, int arr[], int n)
{
    if(i>=n/2) return;
    swap(arr[i], arr[n-i-1]);
    reverseArray(i+1,arr,n);
}

bool checkPalindromeString(int i, string &s)
{
    if(i>=s.size()/2) return true;
    if(s[i] != s[s.size()-i-1]) return false;
    checkPalindromeString(i+1,s);
}

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    reverseArray(0, arr, n);
    for(int i=0; i<n; i++) cout << arr[i] << " ";

    string s="madam";
    cout << checkPalindromeString(0, s);
}