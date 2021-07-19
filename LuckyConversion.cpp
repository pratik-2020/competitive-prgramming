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
    return a>b?a:b;
}
void solve(){
    string s,t;
    cin>>s;
    cin>>t;
    ll f=0,se=0;
    for(int i=0; i<s.length(); i++){
        if(s[i] != t[i] && s[i] == '4'){
            f+=1;
        }
        else if(s[i] != t[i] && s[i] == '7'){
            se+=1;
        }
    }
    ll z = minm(f,se) + (maxm(f,se) - minm(f,se));
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

