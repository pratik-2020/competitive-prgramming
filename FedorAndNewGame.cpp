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
int diffbit(string a, string b){
    int z=0;
    for(int i=0; i<a.length(); i++){
        if(a[i] != b[i]){
            z+=1;
        }
    }
    return z;
}
void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    int a[m+1];
    for(int i=0; i<m+1; i++){
        cin>>a[i];
    }
    ll c=0;
    string z = bitset<64>(a[m]).to_string();
    for(int i=0; i<m; i++){
        string g = bitset<64>(a[i]).to_string();
        if(diffbit(g,z) <= k){
            c++;
        }
    }
    cout<<c;
}
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast;
    /*int t=1;
    int s = 100;
    string f = bitset<64>(s).to_string();
    cout<<f;*/
    solve();
    return 0;
}

