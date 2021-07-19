#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll minm(ll a, ll b){
    return a<b?a:b;
}
typedef long long ll;
int main(){
    int n,x,j;
    cin>>n>>x;
    vector<ll> dp(x+1,1000000007);
    int i;
    ll a[n],z;
    if(n == 1){
        cin>>z;
        if(z > x || x%z != 0){
            cout<<-1;
            return 0;
        }
        cout<<x/z;
    }else{
        for(i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a,a+n);
    dp[0] = 0;
            for(i=1; i<=x; i++){
            for(j=i; j<n; j++){
                if(i<a[j]) break;
                dp[i] = minm(dp[i],dp[i-a[j]]+1);
            }
        }
        if(dp[x] == 1000000007){
            cout<<-1;
        }
        else{
            cout<<dp[x]%1000000007;
        }
    }
}
