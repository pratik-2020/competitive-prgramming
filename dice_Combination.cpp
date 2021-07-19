#include<bits/stdc++.h>
#define MAX 1000001
using namespace std;
typedef long long ll;
vector<int> dp(MAX,-1);
ll minm(ll a, ll b){
    return a<b? a:b;
}
ll fun(int n){
    ll temp;
    int i;
    if(n<0){
        return 0;
    }
    if(n==0 || n==1){
        dp[n] = 1;
        return 1;
    }
    if(!dp[n] == -1){
        return dp[n];
    }
    temp = fun(n-1)+ fun(n-2)+ fun(n-3)+ fun(n-4)+ fun(n-5)+ fun(n-6);
    dp[n] = temp;
    return temp;

}
void solve(){
    int n,x,i,j;
    scanf("%d",&n);
    vector<int> dp(n+1,0);
    dp[0] = dp[1] = 1;
    for(i=2; i<=n; i++){
        for(j=1; j<=6; j++){
            if(i<j){
                break;
            }
            dp[i] = (dp[i]%1000000007 + dp[i-j]%1000000007) %1000000007;
        }
    }
    cout<<dp[n];
}
int main(){
    solve();
}
