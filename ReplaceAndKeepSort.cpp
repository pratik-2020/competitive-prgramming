#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define fi first
#define se second
#define PI 3.1415926535897932384626433832795
#define all(a) a.begin(),a.end()
#define deb(a) cout<<#a<<"->"<<a<<endl
#define nl endl
#define debv(v) for(auto x : v)cout<<x<<" "; cout<<endl;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define MOD 1000000007
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef set<int> si;
typedef set<ll> sll;
typedef set<double> sd;
typedef set<string> ss;
typedef double ld;
#define fill(a, n)              \
    for (int i = 0; i < n; i++) \
    cin >> a[i]
int abs(int a){
    return a<0?-1*a:a;
}
void solve(){
    int l,r,n,q,k;
    cin>>n>>q>>k;
    int a[n];
    //cout<<n;
    vll dp(n);
    vll dp1(n);
    fill(a,n);
    for(int i=0; i<n; i++){
        if(i == 0){
            dp[i] =  a[i+1]-a[i]-1;
            dp1[i] = dp[i];
        }
        else if(i == n-1){
            dp[i] = a[i]-a[i-1]-1;
            dp1[i] = dp1[i-1]+dp[i];
        }
        else{
            dp[i] = a[i]-a[i-1]-1 + a[i+1]-a[i]-1;
            dp1[i] = dp1[i-1]+dp[i];
        }
    }
    //debv(dp);
    //debv(dp1);
    for(int i=0; i<q; i++){
        cin>>l>>r;
        if(n == 1){
            cout<<k-1<<endl;
            continue;
        }
        ll sm=0;
        if(l != 1) sm = sm + dp1[r-1]-dp1[l-2];
        else sm = sm + dp1[r-1];
        sm = sm + a[l-1]-1 + k-a[r-1];
        if(l != 1){
            sm = sm - (a[l-1]-a[l-2]-1);
        }
        if(r != n){
            sm = sm - (a[r]-a[r-1]-1);
        }
        cout<<sm<<endl;
    }
}
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast;
    int t=1;
    solve();
    return 0;
}

