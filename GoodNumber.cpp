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
    int n,k,l=1,c=0,z=0,x;
    cin>>n>>k;
    string s;
    for(int i=0; i<n; i++){
        cin>>s;
        sort(s.begin(), s.end());
        x = s[s.length()-1];
        x-=48;
        if(x<=k){
            z+=1;
        }
    }
    cout<<z;
}
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast;
    int t=1;
    solve();
    //int x = '2';
    //cout<<x;
    /*int x = (char)9;
    int y = 0;
    if(x>y){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }*/
    return 0;
}

