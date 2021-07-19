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
    int a[n], b[n];
    ll sm1=0;
    int c = -MOD;
    vi point[10001], turn[10001];
    for(int i=0; i<n; i++){
        cin>>a[i]>>b[i];
        sm1+=a[i];
        turn[b[i]].pb(a[i]);
        c = max(c,b[i]);
    }
    ll sm2=0,f=0,tr=1;
    for(int i=c; i>=0; i--){
        if(tr == 0 || f>=n || sm2 >= sm1){
            cout<<sm2;
            return;
        }
        sort(turn[i].begin(), turn[i].end(), greater<int>());
        for(int j=0; j<turn[i].size(); j++){
            if(tr == 0) break;
            sm2+=turn[i][j];
            tr+=i;
            tr-=1;
            f++;
        }
    }
    cout<<sm2;
}
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast;
    int t=1;
    solve();
    return 0;
}

