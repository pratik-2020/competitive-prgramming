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
int dp[1001];
int fun(int n){
    if(n <= 0) return 0;
    if(n<=2){
        return dp[n];
    }
    if(dp[n]) return dp[n];
    int z = dp[n] =  min(fun(n-1)+dp[1], fun(n-2)+dp[2]);
    return z;
}
int calcCst(string s, int x, int y, int m){
    vi v;
    int c=0,cst=0;
    for(int i=0; i<m; i++){
        if(s[i] == '.'){
            c++;
        }
        else{
            if(c == 0){
                continue;
            }
            v.pb(c);
            c=0;
        }
    }
    v.pb(c);
    //debv(v);
    for(auto i : v){
        cst += fun(i);
    }
    return cst;
}
void solve(){
    int n,m,x,y;
    cin>>n>>m>>x>>y;
    memset(dp,0, sizeof(dp));
    dp[0] = 0;
    dp[1] = x;
    dp[2] = min(2*x,y);
    string s;
    ll cost=0;
    for(int i=0; i<n; i++){
        cin>>s;
        cost+=calcCst(s,x,y,m);
    }
    cout<<cost<<endl;
}
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast;
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
