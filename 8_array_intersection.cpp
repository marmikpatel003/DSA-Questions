#include<bits/stdc++.h>
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    while(i<n && j<m)
    {
        int i=0, j=0;
        vector<int> ans;
        if(arr1[i] == arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }

        else if(arr1[i] > arr2[j]){
            j++;
        }

        else{
            i++;
        }
    }

    return ans;
}


int main()
{
    int n=5, m=7;
    int arr1[n] = {1,2,3,4,5};
    int arr2[m] = {3,4,5,6,7,8,9};
    findArrayIntersection(arr1, n, arr2, m);
}