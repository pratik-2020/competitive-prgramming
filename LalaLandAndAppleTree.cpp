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
    int n,x,y;
    cin>>n;
    map<int, int> m;
    vi v;
    for(int i=0; i<n; i++){
        cin>>x>>y;
        m[x] = y;
        v.pb(x);
    }
    ll ap=0;
    sort(all(v));
    if(v[0] < 0 && v[n-1] > 0){
        auto f = lower_bound(v.begin(), v.end(), 1);
        int z = f - v.begin();
        int w = n-z;
        if(z < w){
            for(int i=0; i<2*z; i++){
                ap = ap + m[v[i]];
            }
            ap = ap + m[v[2*z]];
        }
        else if(z > w){
            for(int i=z-w-1; i<n; i++){
                ap = ap + m[v[i]];
            }
        }
        else{
            for(int i=0; i<n; i++){
                ap = ap + m[v[i]];
            }
        }
        cout<<ap;
    }
    else if(v[0] > 0){
        cout<<m[v[0]];
    }
    else{
        cout<<m[v[n-1]];
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

