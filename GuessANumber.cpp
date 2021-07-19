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
    ll d;
    char c;
    cin>>n;
    string s;
    int h=1;
    ll x = MOD, y = -MOD;
    for(int i=0; i<n; i++){
        cin>>s>>d>>c;
        if(y>x){
            h=0;
        }
        if(h && s == "<=" && c == 'Y'){
            if(d < x){
                x=d;
            }
        }
        else if(h && s == ">=" && c == 'Y'){
            if(d > y){
                y=d;
            }
        }
        else if(h && s == "<" && c == 'Y'){
            if(d-1<x){
                x=d-1;
            }
        }
        else if(h && s == ">" && c == 'Y'){
            if(d+1 > y){
                y=d+1;
            }
        }
        else if(h && s == "<=" && c == 'N'){
            if(d+1 > y){
                y=d+1;
            }
        }
        else if(h && s == ">=" && c == 'N'){
            if(x>d-1){
                x=d-1;
            }
        }
        else if(h && s == "<" && c == 'N'){
            if(d>y){
                y=d;
            }
        }
        else if(h && s == ">" && c == 'N'){
            if(d < x){
                x = d;
            }
        }
    }
    if(y>x){
        cout<<"Impossible";
        return;
    }
    if(y == x){
        cout<<x;
        return;
    }
    cout<<x-1;
    return;
}
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast;
    int t=1;
    solve();
    /*vector<string> result;
    string input = "Pratik Singh";
    split(result, input, is_any_of(" "));
    debv(result);*/
    return 0;
}

