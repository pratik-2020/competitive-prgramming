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
int maxm(int a, int b){
    return a<b?b:a;
}
void solve(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a == maxm(a,b)){
        if(d == maxm(c,d)){
            if(a>c && b<d){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
        else{
            if(a>d && c>b){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }else{
        if(d == maxm(c,d)){
            if(b>c && a<d){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
        else{
            if(b>d && c>a){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast;
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        solve();
    }
    return 0;
}

