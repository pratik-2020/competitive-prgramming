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
    int n,k,j=0;
    cin>>n>>k;
    vll p;
    int a[n];
    fill(a,n);
    if(n == 1){
        cout<<1;
    }
    else if(n == 2){
        if(a[1] != a[0]){
            cout<<2;
        }else{
            cout<<1;
        }
    }
    else{
    int c = 1,i;
    for(i=1; i<n; i++){
        if(a[i] != a[i-1]){
            c+=1;
        }
        else{
            p.pb(c);
            //cout<<a[i]<<" "<<a[i-1]<<endl;
            j+=1;
            c=1;
        }
    }
    p.pb(c);
    sort(p.begin(), p.end());
    /*for(i=0; i<j; i++){
        cout<<p[i]<<" ";
    }*/
    cout<<p[p.size()-1];
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
