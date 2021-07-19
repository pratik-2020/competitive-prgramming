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
    int a[n];
    fill(a,n);
    int e=0;
    vi o;
    for(int i=0; i<n; i++){
        if(a[i]%2 == 0){
            e+=1;
        }
        else{
            o.pb(a[i]);
        }
    }
    sort(o.begin(), o.end(), greater<int>());
    int c = 0;
    for(int i=0; i<o.size()-1; i++){
        for(int j=i+1; j<o.size(); j++){
            if(__gcd(o[i],2*o[j]) > 1){
                c+=1;
                //cout<<o[i]<<" "<<o[j]<<endl;
            }
        }
    }
    ll z = n*e - (e*(e+1)/2);
    c = c + z;
    cout<<c<<endl;
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

