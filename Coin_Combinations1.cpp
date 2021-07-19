#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n,x,i,j;
    cin>>n>>x;
    int a[n];
    vector<ll> dp(x+1,0);
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a,a+n);
    dp[0] = 1;
    for(i=a[0]; i<=x; i++){
        for(j=0; j<n; j++){
            if(i<a[j]){break;}
            dp[i] = (dp[i]%1000000007 + dp[i-a[j]]%1000000007)%1000000007;
        }
    }
    /*for(i=0; i<=x; i++){
        cout<<i<<" "<<dp[i]<<"\n";
    }
    cout<<endl;*/
    cout<<dp[x]%1000000007;
    return 0;
}
