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
    int x,n,k;
    cin>>n>>k;
    vll v(65,0);
    for(int i=0; i<n; i++){
        cin>>x;
        string s = bitset<64>(x).to_string();
        //cout<<s<<endl;
        for(int j=0; j<s.length(); j++){
            if(s[j] == '1'){
                v[s.length()-1-j]++;
            }
        }
    }
    ll num_op=0;
    //debv(v);
    for(int i=0; i<65; i++){
        num_op += ((v[i]/k) + (v[i]%k == 0?0:1));
        //cout<<num_op<<" "<<v[i]<<endl;
    }
    cout<<num_op<<endl;
}
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast;
    //double d = log2(1000000000);
//    cout<<d;
    int t=1;

    cin>>t;
    while(t--)
        solve();

    return 0;
}

