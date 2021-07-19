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
    int x[n],y[n];
    for(int i=0; i<n; i++){
        cin>>x[i]>>y[i];
    }
    if(n == 1){
        cout<<-1;
    }
    else{
        if(n == 2){
            if(x[0] == x[1]  || y[0] == y[1]){
                cout<<-1;
            }else{
                int l = abs(x[0]-x[1]);
                int b = abs(y[0]-y[1]);
                cout<<l*b;
            }
        }
        else if(n == 3){
                if((x[0] == x[1] && x[0] == x[2]) || (y[0] == y[1] && y[0] == y[2]) || (x[1] == x[0] && x[1] == x[2]) || (x[2] == x[1] && x[0] == x[1]) || (y[1] == y[2] && y[0] == y[1])){
                    cout<<-1;
                }
                int l,b;
            if(x[0] != x[1]){
                l = abs(x[0] - x[1]);
            }
            else if(x[1] != x[2]){
                l = abs(x[1] - x[2]);
            }
            else{
                l = abs(x[0] - x[2]);
            }
            if(y[0] != y[1]){
                b = abs(y[0] - y[1]);
            }
            else if(y[1] != y[2]){
                b = abs(y[1] - y[2]);
            }
            else{
                b = abs(y[0] - y[2]);
            }
            cout<<l*b;
        }
        else{
            int l,b;
            if(x[0] != x[1]){
                l = abs(x[0] - x[1]);
            }
            else if(x[1] != x[2]){
                l = abs(x[1] - x[2]);
            }
            else if(x[1] != x[3]){
                l = abs(x[1] - x[3]);
            }
            else if(x[3] != x[2]){
                l = abs(x[3] - x[2]);
            }
            else if(x[0] != x[3]){
                l = abs(x[0] - x[3]);
            }
            else{
                l = abs(x[0] - x[2]);
            }
            if(y[0] != y[1]){
                b = abs(y[0] - y[1]);
            }
            else if(y[1] != y[2]){
                b = abs(y[1] - y[2]);
            }
            else if(y[1] != y[3]){
                b = abs(y[1] - y[3]);
            }
            else if(y[3] != y[2]){
                b = abs(y[3] - y[2]);
            }
            else if(y[0] != y[3]){
                b = abs(y[0] - y[3]);
            }
            else{
                b = abs(y[0] - y[2]);
            }
            cout<<l*b;
        }
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

