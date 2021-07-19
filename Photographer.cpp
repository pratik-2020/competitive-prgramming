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
    int n,d,c,b;
    map<ll,vi> v;
    cin>>n>>d;
    cin>>c>>b;
    ll a[n],x,y;
    for(int i=0; i<n; i++){
        cin>>x>>y;
        a[i] = (c*x + b*y);
        v[a[i]].pb(i);
    }
    sort(a,a+n);
    ll ct=0;
    string s = "";
    for(int i=0; i<n; i++){
        if(a[i] <= d){
            d-=a[i];
            ct++;
            for(int j=0; j<v[a[i]].size(); j++){
                s = s + to_string(a[i]) + " ";
            }
        }
    }
    if(ct){
        cout<<c<<endl<<s;
        return;
    }
    cout<<c;
}
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast;
    int t=1;
    solve();
    return 0;
}

