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
    ll x;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x;
        if(x%2 == 0 && x == 4){
            cout<<"YES"<<endl;
        }
        else if(x%2 == 0 && x!=4){
            cout<<"NO"<<endl;
        }
        else{
            int u = x/2;
            int l = 2;
            int c=0;
            while(c <2 && l<=u){
                if(x%l == 0 || x%u == 0){
                    c+=1;
                }
                 //cout<<c<<" "<<l<<" "<<u<<endl;
                l+=1;
                u-=1;
            }
            c+=2;
            if(c != 3){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
    }
}
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast;
    int t=1;
    solve();
    //cout<<999966000289%999983;
    return 0;
}

