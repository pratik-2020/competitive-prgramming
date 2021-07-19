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
    int n,k,l,r,sll,sk;
    cin>>n>>k>>l>>r>>sll>>sk;
    vi v;
    int t = sk/k;
    if(sk%k == 0){
        for(int i=0; i<k; i++){
            v.pb(t);
        }
    }
    else{
        for(int i=0; i<k; i++){
            v.pb(t);
        }
        int y = sk%k;
        int h=0;
        while(y>0){
            v[h]++;
            y--;
            h++;
        }
    }
    if(n == k){
        debv(v);
        return;
    }
    int z = (sll - sk)/(n-k);
    if((sll - sk)%(n-k) == 0){
        for(int i=0; i<(n-k);i++){
            v.pb(z);
        }
    }
    else{
        for(int i=0; i<(n-k); i++){
            v.pb(z);
        }
        int y = (sll -sk)%(n-k);
        int h=k;
        while(h < n && y>0){
            v[h]++;
            y--;
            h++;
        }
    }
    debv(v);
    //cout<<v.size();
}
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast;
    int t=1;
    solve();
    return 0;
}

