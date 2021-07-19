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
    int n,m,l,r,x,i,j;
    cin>>n>>m;
    vll d(n);
    int p[n], z[n];
    for(i=0; i<n; i++){
        cin>>p[i];
    }
    for(i=0; i<m; i++){
        cin>>l>>r>>x;
        for(j=l-1; j<r; j++){
            d.pb(p[j]);
        }
        sort(d+l-1,d+r);
        if(d[x-1] == p[x-1]){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
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

