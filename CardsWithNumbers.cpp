#include <bits/stdc++.h>
using namespace std;
#include<string>
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
    vi g[5001];
    vi c(5001, 0);
    int n,x;
    cin>>n;
    for(int i=0; i<2*n; i++){
        cin>>x;
        c[x]++;
        g[x].pb(i+1);
    }
    string f = "";
    for(int k=0; k<5001; k++){
        if(c[k]%2 ==0 && c[k]) {
            for(int y=0; y<c[k]-1; y+=2){
                f += to_string(g[k][y]) + " " + to_string(g[k][y+1]) + "\n";
            }
        }
        else if(c[k]%2){
            cout<<-1;
            return;
        }
    }
    cout<<f;
}
int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    fast;
    int t=1;
    solve();
    return 0;
}

