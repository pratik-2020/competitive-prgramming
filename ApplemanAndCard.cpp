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
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    set<char> st;
    for(int i=0; i<n; i++){
        st.insert(s[i]);
    }
    vll v;
    ll c=0;
    for(auto i: st){
        for(int j=0; j<n; j++){
            if(i == s[j]){
                c+=1;
                //cout<<"h"<<endl;
            }
        }
        v.pb(c);
        c=0;
    }
    sort(v.begin(), v.end(), greater<int>());
    c=0;
    /*for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;*/
    for(int i=0; i<v.size(); i++){
        if(k==0){
            break;
        }
        else if(v[i] <= k){
            c = c + (v[i]*v[i]);
            k = k - v[i];
        }
        else{
            c = c + (k*k);
            k=0;
        }
    }
    cout<<c;
}
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast;
    int t=1;
    solve();
    //ll l = 2500000000;
    //cout<<l;
    return 0;
}

