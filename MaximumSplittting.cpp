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
    if(n < 4 || n == 5 || n == 7){
        cout<<-1<<endl;
        return;
    }
    else{
        if(n%4 == 0){
            cout<<n/4<<endl;
            return;
        }
        else if(n%4 == 1){
            n = n - 9;
            cout<<(n/4)+1<<endl;
            return;
        }
        else if(n%4 == 2){
            cout<<n/4<<endl;
        }
        else{
            n = n - 15;
            if(n < 0){
                cout<<-1<<endl;
                return;
            }
            cout<<(n/4)+2<<endl;
        }
    }
}
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast;
    int t=1;
    cin>>t;
    while(t--)
    solve();
    return 0;
}

