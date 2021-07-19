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
    ll a[n];
    int j=-100;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(j == -100 && a[i] == 0){
            j = i;
        }
    }
    ll t=0;
    ll c=0;
    //cout<<j<<endl;
    while(t<n){
        if(c == 0){
            for(int i=j; i<n; i++){
                if(a[i] <= t && a[i] >=0 ){
                    t++;
                    a[i] = -100;
                }
            }
            if(t<n){
                c++;
            }
        }
        else if(c%2 == 1){
            for(int i=n-1; i>=0; i--){
                if(a[i] <= t && a[i] >= 0){
                    t++;
                    a[i] = -100;
                    //cout<<"a "<<a[i]<<" "<<t<<endl;
                }
            }
            //cout<<"h "<<t<<endl;
            if(t<n){
                c++;
            }
        }
        else{
            for(int i=0; i<n; i++){
                if(a[i] <= t && a[i] >=0){
                    t++;
                    a[i] = -100;
                }
            }
            //cout<<t<<endl;
            if(t<n){
                c++;
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
    solve();
    return 0;
}
