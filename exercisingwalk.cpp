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
typedef double ld;
#define fill(a, n)              \
    for (int i = 0; i < n; i++) \
    cin >> a[i]
int abs(int n){
    return n<0?-1*n:n;
}
void solve(){
    ll l,br,a,b,c,d,x,y,x1,y1,x2,y2;
    cin>>a>>b>>c>>d;
    cin>>x>>y>>x1>>y1>>x2>>y2;
    if ((x1 == x2 && a!=0 && b!=0) || (y1 == y2 && c!=0 && d !=0)){
        cout<<"NO"<<endl;
    }else{
        x = x -a + b;
        y = y -c + d;
        if((x<=x2 && x >= x1) && (y<=y2 && y>=y1)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast;
    int t,i;
    cin>>t;
    for(i=0; i<t; i++){
        solve();
    }
    return 0;
}

