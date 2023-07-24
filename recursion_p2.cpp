#include<bits/stdc++.h>
using namespace std;

int sumUsingRecursion(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n+sumUsingRecursion(n-1);
}

int factUsingRecursion(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n*sumUsingRecursion(n-1);
}

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    cout << "Sum : " << sumUsingRecursion(n) << endl;
    cout << "Factorial : " << factUsingRecursion(n) << endl;
}