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
    int n,m,d;
    cin>>n>>m>>d;
    int a[n*m],k=0,x;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>x;
            a[k] = x;
            k++;
        }
    }
    sort(a,a+(n*m));
    ll c=0;
    if((n*m)%2 == 1){
        for(int i=0; i<n*m; i++){
            if(abs(a[(n*m)/2]-a[i])%d != 0){
                cout<<-1;
                return;
            }
            c+=(abs(a[(n*m)/2]-a[i])/d);
        }
    }
    else{
        if((a[((n*m)/2)-1] - a[0]) > a[n-1] - a[((n*m)/2)]){
            for(int i=0; i<n*m; i++){
                if(abs(a[((n*m)/2)] - a[i])%d != 0){
                    cout<<-1;
                    return;
                }
                //cout<<c<<" ";
                c+=(abs(a[((n*m)/2)] - a[i])/d);
            }
        }
        else{
            for(int i=0; i<n*m; i++){
                if(abs(a[((n*m)/2)-1] - a[i])%d != 0){
                    cout<<-1;
                    return;
                }
                c+=(abs(a[((n*m)/2)] - a[i])/d);
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

