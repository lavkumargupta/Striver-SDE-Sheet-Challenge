#include<bits/stdc++.h>
using namespace std;

void helper(vector<vector<int>> &matrix, int a, int b, int m, int n){

	// cout<<a<<b<<endl;
    for(int i=0; i<m; i++){
        matrix[i][b]=0;
    }
    
    for(int j=0; j<n; j++){
        matrix[a][j]=0;
    }
}

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
    vector<vector<int>> v;
    int m=matrix.size();
    int n=matrix[0].size();
    for(int i=0; i<m; i++){
        vector<int> temp;
        for(int j=0; j<n; j++){
            temp.push_back(matrix[i][j]);
        }
        v.push_back(temp);
    }
    
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(v[i][j]==0){
                helper(matrix, i, j, m, n);
            }  
        }
    }    
}

int main(){

	int t;
	cin>>t;
	while(t--){
		vector<vector<int>> v;
		int n,m;
		cin>>n>>m;

		for(int i=0; i<n; i++){
			vector<int> temp;
			for(int j=0; j<m; j++){
				int a;
				cin>>a;
				temp.push_back(a);
			}
			v.push_back(temp);
		}

		setZeros(v);

		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				cout<<v[i][j]<<" ";
			}
			cout<<endl;
		}
	}
}