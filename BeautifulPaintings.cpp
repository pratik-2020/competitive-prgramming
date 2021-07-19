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
ll maxm(ll a, ll b){
    return a>b?a:b;
}
void solve(){
    int n;
    cin>>n;
    ll a[n];
    vi v(1001,0);
    si s;
    ll c = 0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        s.insert(a[i]);
        v[a[i]]++;
    }
    for(auto i : s){
        c+=v[i];
    }
    ll z=0;
    vi x;
    while(z<c){
        for(auto i : s){
            if(v[i]){
               x.pb(i);
               v[i]--;
               z+=1;
            }
            //cout<<c<<endl;
        }
    }
    z=0;
    for(int i=0; i<x.size()-1; i++){
        if(x[i] < x[i+1]){
            z++;
        }
    }
    cout<<z;
}
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast;
    int t=1;
    solve();
    return 0;
}

