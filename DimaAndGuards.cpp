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
int minm(int a, int b){
    return a<b?a:b;
}
void solve(){
    int x,i,n,a1,b1,a2,b2,flg=0;
    cin>>n;
    for(i=0; i<4; i++){
        cin>>a1>>b1>>a2>>b2;
        x = minm(a1,b1);
        if(n-x >=  minm(a2,b2)){
            cout<<i+1<<" "<<minm(a1,b1)<<" "<<n-x;
            flg = 1;
        }
    }
    if(flg == 0){
        cout<<-1;
    }
}
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast;
    int t=1;
    solve();
    return 0;
}

