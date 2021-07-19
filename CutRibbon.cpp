#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, a[3];
    cin>>n>>a[0]>>a[1]>>a[2];
    sort(a,a+3);
    vector<int> dp(n+1,0);
    if(a[0] <= n){
        dp[a[0]] = 1;
    }
    if(a[1] <= n){
        dp[a[1]] = 1;
    }
    if(a[2] <= n){
        dp[a[2]] = 1;
    }
    for(int i=a[0]+1; i<=n; i++){
        for(int j=0; j<3; j++){
            if(a[j] > i){
                continue;
            }
            else{
                if(dp[i-a[j]]){
                    dp[i] = max(dp[i], dp[i-a[j]]+1);
                }
            }
        }
    }
    /*for(int i=0; i<n; i++){
        cout<<dp[i]<< " ";
    }*/
    cout<<dp[n];
}
int main(){
    solve();
}
