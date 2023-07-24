#include<bits/stdc++.h>
using namespace std;

int fibonacciUsingRecursion(int n)
{
    if(n<=1) return n;
    int last=n-1;
    int slast=n-2;
    return last+slast;
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << fibonacciUsingRecursion(n);
}