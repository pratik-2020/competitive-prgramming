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
vi v[26];
//vi ct(26,0);
/*void printc(){
    for(int i=0; i<26; i++){
        if(ct[i]){
            for(int j=0; j<v[i].size(); j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
        }
    }
}*/
void solve(){
    int n,m,k,l,z;
    string s;
    cin>>n>>m;
    cin>>s;
    char x,y, a[26];
    for(int i=0; i<26; i++){
        a[i] = 'a'+i;
    }
    for(int i=0; i<m; i++){
        cin>>x>>y;
        for(int j=0; j<26; j++){
            if(a[j] == x){
                a[j] = y;
            }
            else if(a[j] == y){
                a[j] = x;
            }
        }
    }
    for(int i=0; i<n; i++){
        cout<<a[s[i] - 'a'];
    }
}
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast;
    int t=1;
    solve();
    //int c = 'a';
    //cout<<c;
    /*vi k[2];
    k[0].pb(1);
    k[0].pb(2);
    k[0].pb(3);
    k[1].pb(4);
    k[1].pb(5);
    cout<<k[1].size()<<" "<<k[0].size()<<endl;
    for(int i=0; i<k[0].size(); i++){
        cout<<k[0][i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<k[1].size(); i++){
        cout<<k[1][i]<<" ";
    }
    cout<<endl;
    vi g = k[0];
    k[0] = k[1];
    k[1] = g;
    cout<<k[1].size()<<" "<<k[0].size()<<endl;
    for(int i=0; i<k[0].size(); i++){
        cout<<k[0][i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<k[1].size(); i++){
        cout<<k[1][i]<<" ";
    }*/
    return 0;
}

