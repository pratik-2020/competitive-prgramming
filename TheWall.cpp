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
    ll a,b;
    cin>>x>>y>>a>>b;
    int i=1;
    while (true){
        if((i*y)%x == 0){
            break;
        }
        i+=1;
    }
    int d = (x*y)/__gcd(x,y);
    int z = i*y;
    if(b<z){
        cout<<0;
        return;
    }
    if(b == z){
        cout<<1;
        return;
    }
    int ind1 = ceil((double)(b-z)/d) + 1;
    if(a<=z){
            if(b%d == 0){
                cout<<ind1;
            }
            else{
                cout<<ind1 - 1;
            }
        return;
    }
    else{
        int ind2 = ceil((double)(a-z)/d) + 1;
        if(a%d == 0){
            cout<<ind1-ind2+1;
        }
        else{
        cout<<ind1-ind2;
        }
        return;
    }

}
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast;
    int t=1;
    solve();
    //cout<<ceil((double)9/10);
    return 0;
}

