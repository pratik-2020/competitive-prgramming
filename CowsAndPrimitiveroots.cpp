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
ll isDivisble(int a, int b, int n){
    ll c = 1;
    for(int i=1; i<=b; i++){
        c = (c*a)%n;
    }
    c = c%n + n-1;
    return c%n;
}
void solve(){
    int n;
    cin>>n;
    int ct=0,h=1;
    for(int i=n-1; i>=2; i--){
        if(!isDivisble(i,n-1,n)){
                //cout<<"h\n";
            for(int j=n-2; j>=1; j--){
                if(!(isDivisble(i,j,n))){
                    h=0;
                    //cout<<(int)(pow(i,j)-1)<<" "<<i<<" "<<j<<endl;
                    break;
                }
            }
            if(h){
                    //cout<<i<<endl;
                ct++;
            }
            h=1;
        }
    }
    cout<<ct;
}
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast;
    int t=1;
    solve();
    return 0;
}

