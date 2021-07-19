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
    map<char,int> m;
    m.insert(make_pair('0',2));
    m.insert(make_pair('1',7));
    m.insert(make_pair('2',2));
    m.insert(make_pair('3',3));
    m.insert(make_pair('4',3));
    m.insert(make_pair('5',4));
    m.insert(make_pair('6',2));
    m.insert(make_pair('7',5));
    m.insert(make_pair('8',1));
    m.insert(make_pair('9',2));
    ll z = m[s[0]]*m[s[1]];
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

