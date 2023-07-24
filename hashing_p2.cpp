#include<bits/stdc++.h>
using namespace std;


//For Lowercase String Only
int main()
{
    string s;
    cout << "Enter String: ";
    cin >> s;

    int hash[26] = {0};
    for(int i=0; i<s.size(); i++)
    {
        hash[s[i]-'a']++;
    }

    int q;
    cout << "Enter How Many Alphabets You Want to Count: ";
    cin >> q;
    while(q--)
    {
        char alphabet;
        cout << "Enter Alphabet: ";
        cin >> alphabet;
        cout << "Count of " << alphabet << " Is:" << hash[alphabet - 'a'] << endl;
    }
    
    return 0;
}


//For Lowercase & Uppercase String
int main()
{
    string s;
    cout << "Enter String: ";
    cin >> s;

    int hash[256] = {0};
    for(int i=0; i<s.size(); i++)
    {
        hash[s[i]]++;
    }

    int q;
    cout << "Enter How Many Alphabets You Want to Count: ";
    cin >> q;
    while(q--)
    {
        char alphabet;
        cout << "Enter Alphabet: ";
        cin >> alphabet;
        cout << "Count of " << alphabet << " Is:" << hash[alphabet] << endl;
    }
    
    return 0;
}