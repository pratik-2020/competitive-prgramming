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
    int p=0,ng=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i] > 0){
            p++;
        }
        else if(a[i] < 0){
            ng++;
        }
    }
    sort(a,a+n);
    if(p == n || ng == n || ng == 1){
        ll pr = a[n-1]*a[n-2]*a[n-3]*a[n-4]*a[n-5];
        cout<<pr<<endl;
        return;
    }
    else{
        if(ng > 2){
            ll pr1 = a[0]*a[1]*a[2]*a[n-1]*a[3];
            ll pr2 = a[0]*a[1]*a[n-1]*a[n-2]*a[n-3];
            ll pr3 = a[n-1]*a[n-2]*a[n-3]*a[n-4]*a[n-5];
            if(pr1 >= pr2 && pr1 >=pr3){
                cout<<pr1<<endl;
                return;
            }
            else if(pr1 <= pr2 && pr2 >=pr3){
                cout<<pr2<<endl;
                return;
            }
            else if(pr3 >= pr2 && pr1 <=pr3){
                cout<<pr3<<endl;
                return;
            }
        }
        else{
            ll pr1 = a[0]*a[1]*a[n-1]*a[n-2]*a[n-3];
            ll pr2 = a[n-1]*a[n-2]*a[n-3]*a[n-4]*a[n-5];
            if(pr1>=pr2){
                cout<<pr1<<endl;
                return;
            }
            else{
                cout<<pr2<<endl;
                return;
            }
        }
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

