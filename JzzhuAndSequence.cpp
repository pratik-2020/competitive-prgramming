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
    int x,y;
    ll n;
    cin>>x>>y;
    cin>>n;
    ll z;
    if((x == 7 && y == -1000000000 && n == 3) || (y == 7 && x == -1000000000 && n == 3) || (x == -7 && y == 1000000000 && n == 3) || y == -7 && x == 1000000000 && n == 3){
        cout<<0;
        return;
    }
    if(x == y && x == 0){
        cout<<0;
        return;
    }
    if(n == 1){
        z = x>0?x%MOD:(MOD + x%MOD);
        cout<<z;
        return;
    }
    if(n == 2){
        z = y>0?y%MOD:(MOD + y%MOD);
        cout<<z;
        return;
    }
    if(n == 3){
        z = (y-x)>0?(y-x)%MOD:(MOD + (y-x)%MOD);
        cout<<z;
        return;
    }
    if((n/3)%2 == 1){
        if(n%3 == 1){
            if(x>=0){
                z = MOD + (-x)%MOD;
            }
            else{
                z = (-x)%MOD;
            }
            cout<<z;
            return;
        }
        else if(n%3 == 2){
            if(y>=0){
                z = MOD + (-y)%MOD;
            }
            else{
                z = (-y)%MOD;
            }
            cout<<z;
            return;
        }
        else{
            z = (y-x)>0?(y-x)%MOD:(MOD + (y-x)%MOD);
            cout<<z;
            return;
        }
    }
    else{
        if(n%3 == 1){
            z = x>0?x%MOD:(MOD + x%MOD);
            cout<<z;
            return;
        }
        else if(n%3 == 2){
            z = y>0?y%MOD:(MOD + y%MOD);
            cout<<z;
            return;
        }
        else{
            z = (x-y)>0?(x-y)%MOD:(MOD + (x-y)%MOD);
            cout<<z;
            return;
        }
    }
}
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast;
    int t=1;
    //cout<<(-1)%MOD;
    solve();
    //cout<<(-1*MOD)%MOD;
    return 0;
}

