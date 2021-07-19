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
    int n;
    cin>>n;
    int a[n],e[n];
    vi b,c,d;
    vi v[2001];
    si s;
    for(int i=0; i<n; i++){
        cin>>a[i];
        e[i] = a[i];
        v[a[i]].pb(i);
        s.insert(a[i]);
    }
    sort(a,a+n);
    for(auto i :s ){
        for(int j=0; j<v[i].size(); j++){
            b.pb(v[i][j]+1);
        }
    }
    c = b;
    int h=1,k;
    for(int i=0; i<n-1; i++){
        if(e[b[i]-1] == e[b[i+1]-1]){
            swap(c[i],c[i+1]);
            h=0;
            k=i+1;
            break;
        }
    }
    if(h){
        cout<<"NO";
        return;
    }
    h=1;
    d = c;
    for(int i=k; i<n-1; i++){
        if(e[c[i]-1] == e[c[i+1]-1]){
            swap(d[i],d[i+1]);
            h=0;
            break;
        }
    }
    if(h){
        cout<<"No";
        return;
    }
    cout<<"YES\n";
    debv(b);
    debv(c);
    debv(d);
}
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast;
    int t=1;
    solve();
    return 0;
}

