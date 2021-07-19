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
    int n,m;
    cin>>n>>m;
    vector<vector<int>> t(n);
    vector<vector<int>> row(n);
    vector<vector<int>> col(m);
    for(int i=0; i<n; i++){
        vi temp;
        for(int i=0; i<m; i++){
            int x;
            cin>>x;
            temp.pb(x);
        }
        row.pb(temp);
    }
    for(int i=0; i<m; i++){
        vi temp1;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            temp1.pb(x);
        }
        col.pb(temp1);
    }
    for(int i=0 ;i<m; i++){
        for(int j=0; j<n; j++){
            t[j][i] = col[i][j];
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast;
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        solve();
    }
    return 0;
}

