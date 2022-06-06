#include<bits/stdc++.h>
using namespace std;
vector<int> nextPermutation(vector<int> &v, int n)
{
    //  Write your code here.
    int i,k;
    for(i=n-2; i>=0; i--){
        if(v[i]<v[i+1]) break;
    }
    
    if(i<0) reverse(v.begin(), v.end());
    else{
        for(int j=n-1; j>i; j--){
            if(v[j]>v[i]){
                k=j;
                break;
            }
        }
    }
    
    swap(v[i], v[k]);
    
    reverse(v.begin()+i+1, v.end());
    return v;  
}

int main(){
	

}