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
    int p,q,l,r;
    cin>>p>>q>>l>>r;
    int a[p],b[p],c[q],d[q];
    for(int i=0; i<p; i++){
        cin>>a[i]>>b[i];
    }
    for(int i=0; i<q; i++){
        cin>>c[i]>>d[i];
    }
    int x,y;
    int f=0,h=0;
    for(int i=l; i<=r; i++){
        for(int j=0; j<q; j++){
            x = c[j]+i;
            y = d[j]+i;
            for(int k=0; k<p; k++){
                if((y>=a[k] && x <= a[k]) || (x>=a[k] && x<=b[k]) || (y>=a[k] && y<=b[k] && x<=a[k]) ||(x>=a[k] && x<=b[k] && y>=a[k] && y<=b[k])){
                    h=1;
                    //cout<<x<<" "<<y<<" "<<a[k]<<" "<<b[k]<<endl;
                    break;
                }
            }
            if(h){
                f++;
                h=0;
                break;
            }
        }
    }
    cout<<f;
}
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast;
    int t=1;
    solve();
    return 0;
}

