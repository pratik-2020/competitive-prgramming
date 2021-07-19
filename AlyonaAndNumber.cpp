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
    int n,m;
    cin>>n>>m;
    ll c=0;
    int z;
    if(n<m){
        for(int i=m; i>0; i--){
            if(i%5 == 0){
                c+=(n/5);
            }
            else if(i > 5){
                z = 5 - (i%5);
                int t = n-z>=0?(((n-z)/5)+1):0;
                c+=t;
            }
            else if(i < 5){
                z = 5-i;
                int t = n-z>=0?(((n-z)/5)+1):0;
                c+=t;
            }
        }
    }
    else{
        for(int i=n; i>0; i--){
            if(i%5 == 0){
                c+=(m/5);
            }
            else if(i > 5){
                z = 5 - (i%5);
                int t = m-z>=0?(((m-z)/5)+1):0;
                c+=t;
            }
            else if(i < 5){
                z = 5-i;
                int t = m-z>=0?(((m-z)/5)+1):0;
                c+=t;
            }
        }
    }
    cout<<c;
}
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast;
    int t=1;
    ll g = stoll("5",nullptr,10);
    cout<<g;
    //solve();
    return 0;
}

