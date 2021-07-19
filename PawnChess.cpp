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
    string chb[8],s;
    vi w[8],b[8];
    for(int i=0; i<8; i++){
        cin>>chb[i];
        for(int j=0; j<8; j++){
            if(chb[i][j] == 'W'){
                w[i].pb(j);
            }
            else if(chb[i][j] == 'B'){
                b[i].pb(j);
            }
        }
    }
    int c = MOD,h=1;
    for(int i=0; i<8; i++){
        auto x = w[i];
        for(int j=0; j<x.size(); j++){
            for(int k=i-1; k>=0; k--){
                //cout<<"g ";
                if(chb[k][x[j]] != '.'){
                //cout<<"j "<<k<<" "<<x[j]<<" ";
                   h=0;
                   break;
                }
            }
            if(h){
                //cout<<"h ";
                c = min(c,i);
                break;
            }
            h=1;
        }
    }
    int cf=MOD;
    h=1;
    for(int i=0; i<8; i++){
        auto x = b[i];
        for(int j=0; j<x.size(); j++){
            for(int k=i+1; k<8; k++){
                if(chb[k][x[j]] != '.'){
                    h=0;
                    break;
                }
            }
            if(h){
                cf = min(cf,7-i);
                break;
            }
            h=1;
        }
    }
    if(min(c,cf) == c){
        cout<<"A";
        return;
    }
    cout<<"B";
}
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast;
    int t=1;
    solve();
    return 0;
}

