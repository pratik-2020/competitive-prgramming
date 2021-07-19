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
ll maxm(ll a, ll b){
    return a>b?a:b;
}
ll minm(ll a, ll b){
    return a<b?a:b;
}
void solve(){
    ll a,b;
    cin>>a>>b;
    if(a==b){
        cout<<"0 0"<<endl;
        return;
    }
    if(maxm(a,b)-minm(a,b) == 1){
        cout<<"1 0"<<endl;
        return;
    }
    if(a == 0){
        cout<<b<<" 0\n";
        return;
    }
    if(b == 0){
        cout<<a<<" 0\n";
        return;
    }
    if(__gcd(a,b) == maxm(a,b)-minm(a,b)){
        cout<<maxm(a,b)-minm(a,b)<<" 0\n";
        return;
    }
    cout<<maxm(__gcd(a,b),maxm(a,b)-minm(a,b))<<" "<<minm(minm(a,b),(maxm(a,b)-minm(a,b)) - (a%(maxm(a,b)-minm(a,b))))<<endl;
}
/*void solve(){
    ll a,b;
    cin>>a>>b;
    if(a == b){
        cout<<"0 0\n";
        return;
    }
    if(maxm(a,b) - minm(a,b) == 1){
        cout<<"1 0\n";
        return;
    }
    if(a == 0){
        cout<<b<<" 0\n";
        return;
    }
    if(b == 0){
        cout<<a<<" 0\n";
        return;
    }
    ll inc_i=MOD,inc_max=-MOD;
    ll dec_i=MOD,dec_max=-MOD;
    for(int i=1; i<=minm(a,b); i++){
        inc_max = maxm(inc_max, __gcd(a+i,b+i));
        if(inc_max == __gcd(a+i,b+i)){
            inc_i = i;
        }
    }
    for(int i=1; i<=minm(a,b); i++){
        dec_max = maxm(dec_max, __gcd(a+i,b+i));
        if(inc_max == __gcd(a+i,b+i)){
            dec_i = minm(dec_i,i);
        }
    }
    if(inc_max > dec_max){
        cout<<inc_max<<" "<<inc_i<<endl;
        return;
    }
    else if(inc_max < dec_max){
        cout<<dec_max<<" "<<dec_i<<endl;
        return;
    }
    cout<<dec_max<<" "<<minm(inc_i,dec_i)<<endl;
    return;
}*/
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast;
    int t=1;
    cout<<__gcd(1000000000000000000, 500000000000000000)<<endl;
    cin>>t;
    while(t--)
        solve();
    return 0;
}

