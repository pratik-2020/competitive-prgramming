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
    int q,k=1;
    cin>>q;
    vector<string> old,nw;
    string s,t;
    vi x;
    for(int i=0; i<q; i++){
        cin>>s>>t;
        k=1;
        if(i==0){
            old.pb(s);
            nw.pb(t);
        }
        else{
            for(int j=0; j<nw.size(); j++){
                if(nw[j] == s){
                    nw[j] = t;
                    k=0;
                   // x.pb(j);
                    break;
                }
            }
            if(k){
                old.pb(s);
                nw.pb(t);
                k=1;
            }
        }
    }
    cout<<nw.size()<<endl;
    for(int i=0; i<old.size(); i++){
        cout<<old[i]<<" "<<nw[i]<<endl;
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

