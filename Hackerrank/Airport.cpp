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
    int a[m];
    fill(a,m);
    sort(a,a+m);
    int minc = 0;
    int maxc = 0;
    int z = n;
    for(int i=0; i<m; i++){
        if(z == 0){
            break;
        }
        else if(a[i] < z){
            z = z - a[i];
            minc = minc + (a[i]*(a[i]+1)/2);
        }
        else{
            int x = a[i]-z;
            z=0;
            minc = minc + (a[i]*(a[i]+1)/2) - (x*(x+1)/2);
        }
    }
    z = n;
    while(z > 0 ){
        for(int i=m-1; i>=0; i--){
            sort(a,a+n, greater<int>());
            if(i == 0 && z>0){
                maxc = maxc + a[i];
                a[i] = a[i] - 1;
                z-=1;
            }
            else if(a[i] >= a[i-1] && z>0 && z>1){
                int x = a[i-1]-1;
                maxc = maxc + (a[i]*(a[i]+1)/2) - (x*(x+1)/2);
                z = z - (a[i] - a[i-1]+1);
                a[i] = x;
            }
            else if(a[i]>=a[i-1] && z==1){
                maxc = maxc + a[i];
                z-=1;
            }
        }
    }
    cout<<maxc<<" "<<minc;
}
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast;
    int t=1;
    solve();
    return 0;
}
