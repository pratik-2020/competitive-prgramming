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
void solve(){
    int n;
    cin>>n;
    string s;
    int c[n];
    vi btm;
    vi d;
    int k=0;
    ll a=MOD,b=MOD,vt=MOD,tc=MOD;
    for(int i=0; i<n; i++){
        cin>>c[i]>>s;
        int m=0;
        for(int j=0; j<s.length(); j++){
            m = m | (1 << (s[j]-'A'));
        }
        //cout<<" a "<<m<<endl;
        if(m == 1){
            a = minm(a,c[i]);
        }
        else if(m == 2){
            b = minm(b,c[i]);
        }
        else if(m == 4){
            vt = minm(vt, c[i]);
        }
        else if(m == 7){
            tc = minm(tc,c[i]);
        }
        else{
            btm.pb(m);
            d.pb(c[i]);
            k++;
        }
    }
    //debv(d);
    ll minc = a+b+vt;
    minc = minm(minc,tc);
    //cout<<minc<<endl;
    for(int i=0; i<k-1; i++){
        for(int j=i+1; j<k; j++){
            int x = (btm[i] | btm[j]);
            //cout<<"h";
            if(x == 7){
                minc = minm(minc, d[i]+d[j]);
            }
        }
    }
    if(minc == MOD){
        cout<<-1;
        return;
    }
    cout<<minc;
}
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast;
    int t=1;
    solve();
    return 0;
}

