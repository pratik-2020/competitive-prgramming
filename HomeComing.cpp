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
    int a,b,p;
    cin>>a>>b>>p;
    string s;
    cin>>s;
    vll dp(s.length(),0);
    for(int i=1; i<s.length(); i++){
        if(s[i] == s[i-1]){
            dp[i] = dp[i-1];
        }
        else{
            if(s[i] == 'A'){
                dp[i] = dp[i-1]+b;
            }
            else{
                dp[i] = dp[i-1] + a;
            }
        }
    }
    if(s[s.length()-1] == s[s.length()-2] && s[s.length()-1] == 'A'){
        dp[s.length()-1] = dp[s.length()-2]+a;
    }
    else if(s[s.length()-1] == s[s.length()-2] && s[s.length()-1] == 'B'){
        dp[s.length()-1] = dp[s.length()-2]+b;
    }
    if(dp[s.length()-1] <= p){
        cout<<1<<endl;
        return;
    }
    for(int i=1; i<s.length(); i++){
        if(dp[s.length()-1] - dp[i] <= p){
            cout<<i+1<<endl;
            return;
        }
    }
    cout<<s.length()<<endl;
    return;
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

