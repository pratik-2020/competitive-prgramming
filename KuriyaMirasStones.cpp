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
typedef double ld;
#define fill(a, n)              \
    for (int i = 0; i < n; i++) \
    cin >> a[i]
void solve(){
    int n,m,l,r,t;
    cin>>n;
    vi a;
    for(int i=0; i<n; i++){
        int d;
        cin>>d;
        a.push_back(d);
    }
    vi b = a;
    sort(b.begin(), b.end());
    cin>>m;
    ll x = 0;
    vll s(n);
    vll g(n);
    s[0] = a[0];
    for(int i=1; i<n;i++){
        s[i] = s[i-1]+a[i];
    }
    g[0] = b[0];
    for(int i=1; i<n;i++){
        g[i] = g[i-1]+b[i];
    }
    /*for(int i=0; i<n; i++){
        cout<<g[i]<<" ";
    }
    cout<<endl;*/
    for(int i=0; i<m; i++){
        cin>>t>>l>>r;
        if(t == 1){
            if (l != 1)
            x = s[r-1]-s[l-2];
            else
                x = s[r-1];
        }else{
            if (l !=1)
            x = g[r-1]-g[l-2];
            else
                x = g[r-1];
        }
        cout<<x<<endl;
        x=0;
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

