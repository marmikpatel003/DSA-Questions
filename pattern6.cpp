#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter n : ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=n-i-1; j++)
        {
            cout << j+1 << " ";
        }
        cout << endl;
    }
}