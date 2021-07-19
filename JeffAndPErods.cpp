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
int ap(vi v){
    sort(v.begin(), v.end());
    int dif = v[1]-v[0];
    for(int i=1; i<v.size(); i++){
        if(v[i+1] - v[i] != dif){
            return 0;
        }
    }
    return dif;
}
void solve(){
    int n,m;
    vi v[100001];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>m;
        v[m].pb(i);
    }
    int c=0;
    si s;
    map<int, int> g;
    for(int i=0; i<100001; i++){
        vi y = v[i];
        if(y.size() == 1){
            s.insert(i);
            c = c +1;
            g.insert(make_pair(i,0));
            continue;
        }
        else if(y.size() >1){
            int d = ap(y);
            if(d){
                s.insert(i);
                c+=1;
                g.insert(make_pair(i,d));
            }
        }
    }
    cout<<c<<endl;
    for(auto i : s){
        cout<<i<<" "<<g[i]<<endl;
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

