#include <bits/stdc++.h> 

int helper(int m, int n, int i, int j, vector<vector<int>>& v){
    if(i==m-1 && j==n-1) return 1;
    if(i>m-1 || j>n-1) return 0;
    if(v[i][j]!=-1) return v[i][j];
    return v[i][j]=helper(m, n, i+1, j, v)+helper(m,n,i, j+1, v);
    
}

int uniquePaths(int m, int n) {
	// Write your code here.
    
//     vector<vector<int, int>> v(m+1, vector<int>(n+1));
    vector<vector<int>> v;
    for(int i=0; i<m+1; i++){
        vector<int> temp;
        for(int j=0; j<n+1; j++){
            temp.push_back(-1);
//             v[i][j]=-1;
        }
        v.push_back(temp);
    }
    return helper(m, n, 0, 0, v);
}