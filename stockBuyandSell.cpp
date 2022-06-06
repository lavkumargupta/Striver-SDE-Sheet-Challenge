#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int mxprofit=0, buy=prices[0];
    for(int i=1; i<prices.size(); i++){
        int profit=0;
        
        profit=prices[i]-buy;
        if(profit>mxprofit)mxprofit=profit;
        if(prices[i]<buy) buy=prices[i];
    }
    return mxprofit;
}