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
vi dp(4,-1);
int distStr(){
    int maxm=-100,minm=MOD;
    for(int i=1; i<4; i++){
        maxm = max(dp[i],maxm);
        minm = min(dp[i], minm);
    }
    return maxm-minm+1;
}
void solve(){
    string s;
    cin>>s;
    int c=MOD;
    for(int i=0; i<s.length(); i++){
        dp[s[i]- '0'] = i;
        if(dp[1] != -1 && dp[2] != -1 && dp[3] != -1){
            c = min(c,distStr());
        }
    }
    if(c == MOD){
        cout<<0<<endl;
        for(int i=0; i<4; i++){
            dp[i] = -1;
        }
        return;
    }
    cout<<c<<endl;
    for(int i=0; i<4; i++){
        dp[i] = -1;
    }
}
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast;
    int t=1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}

