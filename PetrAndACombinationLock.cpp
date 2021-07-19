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
    int n;
    cin>>n;
    int a[n+1];
    a[0] = 0;
    ll sm=0;
    for(int i=1; i<=n; i++){
        cin>>a[i];
        sm+=a[i];
    }
    if(sm%2 == 1){
        cout<<"NO\n";
        return;
    }
    if(sm == 360){
        cout<<"YES\n";
        return;
    }
    ll d = sm/2;
    ll dp[n+1][d+1];
    dp[0][0] = 1;
    for(int i=1; i<=d; i++){
        dp[0][i] = 0;
    }
    int k=-100;
    for(int i=1; i<=n; i++){
        if(a[i] > d){
            k=i-1;
            break;
        }
        for(int j=0; j<=d; j++){
            if(j < a[i]){
                dp[i][j] = dp[i-1][j];
            }
            else{
                int nd = j - a[i];
                if(dp[i-1][j] || dp[i-1][nd]){
                    dp[i][j] = 1;
                }
                else{
                    dp[i][j] = 0;
                }
            }
        }
    }
    for(int i=0; i<=n; i++){
        for(int j=0; j<=d; j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    if(k == -100) k = n;
    if(dp[k][d]){
        cout<<"YES\n";
        return;
    }
    cout<<"NO\n";
    return;
}
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast;
    int t=1;
    solve();
    return 0;
}

