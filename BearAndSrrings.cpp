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
    string s,g;
    cin>>s;
    vi v;
    if(s.length() < 4){
        cout<<0;
        return;
    }
    //cout<<s.length()<<endl;
    for(int i=0; i<s.length()-3; i++){
        g = s.substr(i,4);
        if(g == "bear"){
            v.pb(i);
        }
    }
    ll c=0;
    for(int i=0; i<v.size(); i++){
        c = c + (s.length()-v[i]-3);
        if(!i && v[i]>0){
            c = c + (v[i])*(s.length()-v[i]-3);
        }
        else if(i && (v[i]-v[i-1]-1) > 0){
            c = c + (v[i]-v[i-1]-1)*(s.length()-v[i]-3);
        }
        //cout<<c<<endl;
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

