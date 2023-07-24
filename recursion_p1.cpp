#include <bits/stdc++.h>
using namespace std;

void printName(int i, int n){
    if(i>n)
    {
        return;
    }
    cout << "Marmik" << endl;
    printName(i+1,n);
}

void printOneToN(int i, int n){
    if(i>n)
    {
        return;
    }
    cout << i << endl;
    printOneToN(i+1,n);
}

void printNToOne(int i){
    if(i<1)
    {
        return;
    }
    cout << i << endl;
    printNToOne(i-1);
}

void printOneToNWithBT(int i)
{
    if(i<1)
    {
        return;
    }
    printOneToNWithBT(i-1);
    cout << i << endl;
}

void printNToOneWithBT(int n, int i)
{
    if(i>n)
    {
        return;
    }
    printNToOneWithBT(n,i+1);
    cout << i << endl;
}

int main() {

    int n;
    cout << "Enter n : ";
    cin >> n;
    // printName(1,n);
    // printOneToN(1,n);
    // printNToOne(n);
    // printOneToNWithBT(n);
    printNToOneWithBT(n, 1);

    return 0;
}