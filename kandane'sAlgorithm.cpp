#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    
    long long mx=0;
    long long ad=0, i=0;
    while(i<n){
        ad+=arr[i];
        if(ad>mx) mx=ad;
        if(ad<0) ad=0;
        i++;
    }
    return mx;
}