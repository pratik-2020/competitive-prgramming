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
    int n,k;
    cin>>n>>k;
    int a[n+1];
    if(n == k){
        cout<<-1;
        return;
    }
    for(int i=2; i<=2+k-1; i++){
        a[i] = i;
    }
    if(n%2 == 1){
        if(k%2 == 1){
            a[1] = n;
            a[n] = 1;
            for(int i=2+k; i<=n-1; i++){
                if(i%2 == 1){
                    a[i] = i+1;
                }
                else{
                    a[i] = i-1;
                }
            }
        }
        else{
            a[1] = 1;
            for(int i=2+k; i<=n; i++){
                if(i%2 == 0){
                    a[i] = i+1;
                }
                else{
                    a[i] = i-1;
                }
            }
        }
    }
    else{
        if(k%2 == 0){
            a[1] = n;
            a[n] = 1;
            for(int i=2+k; i<=n-1; i++){
                if(i%2 == 0){
                    a[i] = i+1;
                }
                else{
                    a[i] = i-1;
                }
            }
        }
        else{
            a[1] = 1;
            for(int i=2+k; i<=n; i++){
                if(i%2 == 1){
                    a[i] = i+1;
                }
                else{
                    a[i] = i-1;
                }
            }
        }
    }
    for(int i=1; i<=n; i++){
        cout<<a[i]<<" ";
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

