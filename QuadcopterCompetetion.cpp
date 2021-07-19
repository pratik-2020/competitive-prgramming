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
    int x1,y1,x2,y2;
    cin>>x1>>y1;
    cin>>x2>>y2;
    int x3,y3;
    if(x1 > x2){
        x3 = x2-1;
    }else{
        x3 = x2 + 1;
    }
    if(y1 > y2){
        y3 = y2-1;
    }else{
        y3 = y2 +1;
    }
    int l = abs(x1-x3);
    int b = abs(y1-y3);
    if(x1 == x2){
        l*=2;
    }
    if(y1 == y2){
        b*=2;
    }
    int z = 2*(l+b);
    cout<<z;
    //cout<<z<<" "<<x3<<" "<<y3<<" "<<l<<" "<<b;
}
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast;
    int t=1;
    solve();
    return 0;
}

