#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
    vector<int> v;
    
    for(int i=0; i<n; i++){
        v.push_back(arr[i]);
    }
    sort(v.begin(),v.end());
    
    for(int i=0; i<n; i++){
        arr[i]=v[i];
    }
}