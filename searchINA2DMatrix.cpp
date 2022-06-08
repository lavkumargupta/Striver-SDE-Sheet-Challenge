#include <bits/stdc++.h> 
#include <vector>

bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int target) {
    // Write your code here.
    int row=m-1;
    
    for(int i=0; i<m-1; i++){
        if(mat[i][0]<=target && mat[i+1][0]>target) row=i;
    }
   bool ans=false;
    for(int i=0; i<n; i++){
        if(mat[row][i]==target){
            ans=true;
        }
    }
    
    return ans;
}