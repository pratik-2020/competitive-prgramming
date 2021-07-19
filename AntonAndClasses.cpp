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
ll minm(ll a, ll b){
    return a<b?a:b;
}
ll maxm(ll a, ll b){
    return a<b?b:a;
}
void solve(){
    int n,m;
    cin>>n;
    ll x = MOD, z = -MOD;
    int a[n][2];
    for(int i=0; i<n; i++){
        cin>>a[i][0]>>a[i][1];
        x = minm(a[i][1], x);
        z = maxm(a[i][0],z);
    }
    cin>>m;
    int b[m][2];
    ll y = -MOD, w = MOD;
    for(int i=0; i<m; i++){
        cin>>b[i][0]>>b[i][1];
        y = maxm(y, b[i][0]);
        w = minm(w, b[i][1]);
    }
    if(y <=x && z <=w){
        cout<<0;
    }
    else{
        cout<<maxm(y-x,z-w);
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

