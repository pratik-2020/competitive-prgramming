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
    int n,m;
    cin>>n;
    int a[n];
    vi sm1,sm2;
    int c = 0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        c+=a[i];
        sm1.pb(c);
    }
    cin>>m;
    int b[m];
    c=0;
    for(int i=0; i<m; i++){
        cin>>b[i];
        c+=b[i];
        sm2.pb(c);
    }
    int d1=-MOD, d2=-MOD;
    for(int i=0; i<n;i++){
        d1 = max(d1,sm1[i]);
    }
    for(int i=0; i<m;i++){
        d2 = max(d2,sm2[i]);
    }
    d1 = max(d1,0);
    d2 = max(d2,0);
    cout<<d1+d2<<endl;
}
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast;
    int t=1;
    cin>>t;
    while(t--)
    solve();
    return 0;
}

