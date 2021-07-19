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
void solve(){
    int n,x,i,j,k;
    cin>>n>>x;
    int a[n];
    fill(a,n);
    vll dp(x+1,0);
    dp[0] = 1;
    sort(a,a+n);
    for(i=a[0]; i<=x; i++){
        for(j=0; j<n; j++){
            if(i<a[j]) break;
            else{
                if(i > a[j]){
                    dp[i] = dp[a[j]];
                    continue;
                }else{
                    dp[i]+= dp[i-a[j]];
                }
            }
        }
    }
    for(i=0; i<=x; i++){
        cout<<i<<" "<<dp[i]<<"\n";
    }
    cout<<dp[x];
}
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast;
    int t=1;
    solve();
    return 0;
}

