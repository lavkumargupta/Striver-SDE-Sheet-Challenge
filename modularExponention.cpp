#include <bits/stdc++.h> 
int modularExponentiation(int x, int n, int m) {
	// Write your code here.
    long long fact=1;
    
    
    while(n--){
        fact=(fact*x)%m;
    }
    return fact;
}