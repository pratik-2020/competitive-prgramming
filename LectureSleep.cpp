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
    int n,k;
    cin>>n>>k;
    int a[n],t[n];
    fill(a,n);
    ll dp[n];
    int o=0;
    for(int i=0; i<n; i++){
        cin>>t[i];
        if(i == 0){
            if(!t[i]){
                dp[i] = a[i];
            }
            else{
                dp[i] = 0;
                o+=a[i];
            }
        }
        else{
            if(!t[i]){
                dp[i] = dp[i-1]+a[i];
            }
            else{
                dp[i] = dp[i-1];
                o+=a[i];
            }
        }
    }
    vll f;
    for(int i=0; i<n-k+1; i++){
        if(i == 0){
            f.pb(dp[i+k-1]);
        }
        else{
            f.pb(dp[i+k-1]-dp[i-1]);
        }
    }
    sort(f.begin(), f.end());
    cout<<o+f[f.size()-1];
}
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast;
    int t=1;
    solve();
    return 0;
}

