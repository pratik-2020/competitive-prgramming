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
    string s = "";
    if(k > n || (k == 1 && n>1)){
        cout<<"-1";
        return;
    }
    else if(k == 1 && n == 1){
        cout<<"a";
        return;
    }
    else if(k == 2){
        if(n%2 == 0){
            for(int i=0; i<n; i+=2){
                cout<<"ab";
            }
        }
        else{
            for(int i=0; i<n-1; i+=2){
                cout<<"ab";
            }
            cout<<"a";
        }
    }
    else{
        int z = k-2;
            if((n-z)%2 == 0){
                for(int i=0; i<n-z; i+=2){
                    cout<<"ab";
                }
            }
            else{
                for(int i=0; i<n-z-1; i+=2){
                    cout<<"ab";
                }
                cout<<"a";
            }
            for(int i=0; i<z; i++){
                cout<<(char)(99+i);
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

