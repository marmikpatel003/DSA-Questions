#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter n : ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        //space
        for(int j=0; j<=i; j++)
        {
            cout << " ";
        }

        //star
        for(int j=0; j<n*2-i*2-1; j++)
        {
            cout << "*";
        }

        //space
        for(int j=0; j<=i; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
}