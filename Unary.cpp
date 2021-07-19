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
    string s;
    cin>>s;
    map<char,string> m;
    m.insert(make_pair('>', "1000"));
    m.insert(make_pair('<', "1001"));
    m.insert(make_pair('+', "1010"));
    m.insert(make_pair('-', "1011"));
    m.insert(make_pair('.', "1100"));
    m.insert(make_pair(',', "1101"));
    m.insert(make_pair('[', "1110"));
    m.insert(make_pair(']', "1111"));
    string g = "";
    for(int i=0; i<s.length(); i++){
        g = g + m[s[i]];
    }
    ll c = 0;
    ll x=0;
    cout<<g.length()<<endl;
    for(int i=g.length()-1; i>=0; i--){
        if(g[i] == '1'){
            c = (c + ((ll)pow(2,g.length()-1-i))%1000003)%1000003;
            //cout<<c<<endl;
        }
    }
    cout<<c%1000003;
}
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast;
    int t=1;
    solve();
    return 0;
}

