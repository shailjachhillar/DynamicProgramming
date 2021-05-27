#include<bits/stdc++.h>
using namespace std;

int rodProfit(int pieces[], int n){

    int dp[n + 1];
    dp[0] = 0;
    dp[1] = pieces[0];
    for(int i = 2; i < n + 1; i++){
        dp[i] = pieces[i - 1];
        int l = 1;
        int r = i - 1;
        while(l <= r){
            if(dp[l] + dp[r] > dp[i]){
                dp[i] = dp[l] + dp[r];
                }
                l++;
                r--;
            }
        }

        return dp[n];
    }

int main(){
    int n;
    cin>>n;
    int pieces[n];
    for(int i = 0; i < n; i++){
        cin>>pieces[i];
    }
    cout<<"Maximum profit ";
    cout<<rodProfit(pieces,n);
} 