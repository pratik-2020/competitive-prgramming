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
    string s[4];
    for(int i=0; i<4; i++){
        cin>>s[i];
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if((s[i][j] == '#' && s[i+1][j] == '#' && s[i][j+1] == '#' && s[i+1][j+1] == '#') || (s[i][j] == '.' && s[i+1][j] == '#' && s[i][j+1] == '#' && s[i+1][j+1] == '#')  || (s[i][j] == '#' && s[i+1][j] == '.' && s[i][j+1] == '#' && s[i+1][j+1] == '#') || (s[i][j] == '#' && s[i+1][j] == '#' && s[i][j+1] == '.' && s[i+1][j+1] == '#') || (s[i][j] == '#' && s[i+1][j] == '#' && s[i][j+1] == '#' && s[i+1][j+1] == '.') || (s[i][j] == '.' && s[i+1][j] == '.' && s[i][j+1] == '.' && s[i+1][j+1] == '.') || (s[i][j] == '#' && s[i+1][j] == '.' && s[i][j+1] == '.' && s[i+1][j+1] == '.')  || (s[i][j] == '.' && s[i+1][j] == '#' && s[i][j+1] == '.' && s[i+1][j+1] == '.') || (s[i][j] == '.' && s[i+1][j] == '.' && s[i][j+1] == '#' && s[i+1][j+1] == '.') || (s[i][j] == '.' && s[i+1][j] == '.' && s[i][j+1] == '.' && s[i+1][j+1] == '#')){
                cout<<"YES";
                return;
            }
        }
    }
    cout<<"NO";
}
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast;
    int t=1;
    solve();
    return 0;
}

