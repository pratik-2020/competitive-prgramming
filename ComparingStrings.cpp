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
    string s,t;
    cin>>s;
    cin>>t;
    if(s.length() != t.length()){
        cout<<"NO";
        return;
    }
    else{
        int c=0;
        vi v;
        for(int i=0; i<s.length(); i++){
            if(c>2){
                cout<<"NO";
                return;
            }
            else if(s[i] != t[i]){
                c+=1;
                v.pb(i);
            }
        }
        if(c == 2){
            char d = s[v[0]];
            s[v[0]] = s[v[1]];
            s[v[1]] = d;
            if(s == t){
                cout<<"YES";
                return;
            }
            cout<<"NO";
            return;
        }
        cout<<"NO";
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

