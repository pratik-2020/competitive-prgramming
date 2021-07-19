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
    int n,B;
    cin>>n>>B;
    int a[n];
    vi e(n),o(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(i == 0 && a[i]%2 == 0){
            e[i]=1;
        }
        else if(i == 0 && a[i]%2 == 1){
            o[i] = 1;
        }
        else{
            if(a[i]%2 == 0){
                e[i]=e[i-1]+1;
                o[i] = o[i-1];
            }
            else{
                e[i] = e[i-1];
                o[i] = o[i-1]+1;
            }
        }
    }
    vi cst;
    for(int i=0; i<n-1; i++){
        if(e[i] == o[i]){
            cst.pb(abs(a[i]-a[i+1]));
        }
    }
    if(cst.size() == 0){
        cout<<0;
        return;
    }
    //debv(cst);
    sort(cst.begin(), cst.end());
    ll ct=0;
    int i=0;
    while(i<cst.size() && ct+cst[i] <= B){
        ct+=cst[i];
        //cout<<ct<<endl;
        i++;

    }
    cout<<i;
}
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast;
    int t=1;
    solve();
    return 0;
}

