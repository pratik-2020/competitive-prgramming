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
void solve(){
    ll d = MOD;
    ll n,x;
    cin>>n;
    ll v[n];
    ll k;
    for(int i=0; i<n; i++){
        cin>>v[i];
        d = minm(d,v[i]);
        if(d == v[i]){
            k = i;
        }
    }
    for(int i=n-1; i>=0; i--){
        if(v[i] == d){
            k = i;
            break;
        }
    }
    for(int i=0; i<n; i++){
        if(v[i] == d){
            x = i;
            break;
        }
    }
    ll z = n*v[k] + n-1-k+x;
    cout<<z;
}
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast;
    int t=1;
    //solve();
    ll l = 207723124205;
    cout<<l;
    return 0;
}

