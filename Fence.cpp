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
int minm(int a, int b){
    return a<b?a:b;
}
void solve(){
    int n,k;
    cin>>n>>k;
    int a[n];
    fill(a,n);
    vll v;
    vll p_s;
    p_s.pb(a[0]);
    for(int i=1; i<n; i++){
        p_s.pb(p_s[i-1]+a[i]);
    }
    ll c=100000000000;
    for(int i=0; i<=n-k; i++){
        if(i == 0){
            c = minm(c, p_s[i+k-1]);
            v.pb(p_s[i+k-1]);
        }
        else{
            c = minm(c, p_s[i+k-1]-p_s[i-1]);
            v.pb(p_s[i+k-1]-p_s[i-1]);
        }
    }
    for(int i=0; i<v.size(); i++){
        if(v[i] == c){
            cout<<i+1;
            return;
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

