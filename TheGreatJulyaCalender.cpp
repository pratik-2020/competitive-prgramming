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
ll dp[100000000];
ll magicNum(ll n){
    if(n == 0) return 0;
    if(n<=9) return 1;
    if(dp[n]) return dp[n];
    ll d=n;
    int m=0;
    while(d>0){
        m = max(m,(int)d%10);
        d/=10;
    }
    ll z = dp[n] = magicNum(n-m)+1;
    return z;
}
void solve(){
    ll n;
    cin>>n;
    ll d = magicNum(n);
    cout<<d;
}
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast;
    memset(dp,0, sizeof(dp));
    int t=1;
    solve();
    return 0;
}

