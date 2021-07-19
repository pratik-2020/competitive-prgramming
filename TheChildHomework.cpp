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
    string A,B,C,D;
    cin>>A;
    cin>>B;
    cin>>C;
    cin>>D;
    vi v;
    v.pb(A.length()-2);
    v.pb(B.length()-2);
    v.pb(C.length()-2);
    v.pb(D.length()-2);
    vi p = v;
    int k=1,l=1;
    sort(p.begin(), p.end());
    int j=0;
    for(int i=1; i<4; i++){
        if(p[i] < 2*p[0]){
            l=0;
            break;
        }
    }
    for(int i=2; i>=0; i--){
        if(2*p[i] > p[3]){
            k=0;
            break;
        }
    }
    //debv(p);
    //cout<<k<<" "<<l<<endl;
    if(k == l){
        cout<<"C";
        return;
    }
    else{
        if(k){
            if(v[0] == p[3]){
                cout<<'A';
                return;
            }
            else if(v[1] == p[3]){
                cout<<'B';
                return;
            }
            else if(v[2] == p[3]){
                cout<<'C';
                return;
            }
            else if(v[3] == p[3]){
                cout<<'D';
                return;
            }
        }
        else{
            if(v[0] == p[0]){
                cout<<'A';
                return;
            }
            else if(v[1] == p[0]){
                cout<<'B';
                return;
            }
            else if(v[2] == p[0]){
                cout<<'C';
                return;
            }
            else if(v[3] == p[0]){
                cout<<'D';
                return;
            }
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

