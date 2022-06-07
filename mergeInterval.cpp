#include <bits/stdc++.h>
using namespace std; 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &v)
{
    // Write your code here.
    int n=v.size();
    vector<vector<int>> ans;
    vector<bool> vis(n, false);
    
    for(int i=0; i<n-1; i++){
        if(vis[i]==false){
//             int j=i+1;
            for(int j=i+1; j<n; j++){
                if(v[i][1]>=v[j][0] && v[i][0]<=v[j][0]){
                    vis[j]=true;
                    v[i][1]=v[j][1];
                }
            }
            ans.push_back(v[i]);
        }
    }
    
    sort(ans.begin(), ans.end());
    return ans;
    
}

int main(){
	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;
		vector<vector<int>> v;

		for(int i=0; i<n; i++){
			vector<int> temp;
			for(int j=0; j<2; j++){
				int n;
				cin>>n;
				temp.push_back(n);
			}
			v.push_back(temp);
		}

		vector<vector<int>> ans=mergeIntervals(v);

		for(int i=0; i<ans.size(); i++){
			cout<<ans[i][0]<<" "<<ans[i][1]
		}
	}
}
