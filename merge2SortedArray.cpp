#include <bits/stdc++.h> 
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
    int j=0;
    int i=m+n-1;
    while(j<n){
        arr1[i]=arr2[j];
        i--;
        j++;
    }
    sort(arr1.begin(), arr1.end());
    return arr1;
}