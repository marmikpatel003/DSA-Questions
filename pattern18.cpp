#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    int initialSpace = 0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i; j++){
            cout << "*";
        }

        for(int j=0; j<initialSpace; j++){
            cout << " ";
        }

        for(int j=0; j<n-i; j++){
            cout << "*";
        }

        initialSpace+=2;
        cout << endl;
    }

    initialSpace = 8;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++){
            cout << "*";
        }

        for(int j=0; j<initialSpace; j++){
            cout << " ";
        }

        for(int j=0; j<=i; j++){
            cout << "*";
        }
        initialSpace-=2;
        cout << endl;

    }
}