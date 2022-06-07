#include <bits/stdc++.h> 
using namespace std;

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	// sort(arr.begin(), arr.end());
    int a,b;
    unordered_map<int, int> mp;

    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }

    for(int i=1; i<=n; i++){
        if(mp.find(i)==mp.end()){
            a=i;
            break;
        }
    }

    for(auto it: mp){
        if(it.second==2){
            b=it.first;
            break;
        }
    }
    
    
    
   pair<int,int> p;
   p.first=a;
   p.second=b;
    return p;
}

int main(){
    int t;
    cin>>t;
    while(t--){


    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }

    pair<int, int> p=missingAndRepeating(v, n);

    cout<<p.first<<" "<<p.second<<endl;

}
}
