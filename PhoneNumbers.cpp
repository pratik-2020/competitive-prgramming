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
ll maxm(ll a, ll b){
    return a>b?a:b;
}
void pri(string s){
    for(int i=0; i<s.length()-2; i++){
        cout<<s[i];
    }
}
void solve(){
    int N;
    cin>>N;
    string s,tx,pz,gl,n;
    int f;
    ll g =- MOD, t = -MOD, p = -MOD,T=0,G=0,P=0;
    for(int i=0; i<N; i++){
        cin>>f>>n;
        for(int j=0; j<f; j++){
            cin>>s;
            if((s[0] > s[1]) && (s[1]>s[3]) && (s[4]>s[6]) && (s[3] > s[4]) && (s[6] > s[7])){
                P++;
            }
            else if(s[0] == s[1] && s[1] == s[3] && s[3] == s[4] && s[4] == s[6] && s[6] == s[7]){
                T++;
            }
            else{
                G++;
            }
        }
        if(g < G){
            gl = n+", ";
            g=G;
        }
        else if(g == G){
            gl= gl + n+", ";
        }
        if(t < T){
            tx = n+", ";
            t = T;
        }
        else if(t == T){
            tx = tx + n + ", ";
        }
        if(p < P){
            pz = n+", ";
            p = P;
        }
        else if(p == P){
            pz = pz + n + ", ";
        }
        G=P=T=0;
    }
    cout<<"If you want to call a taxi, you should call: ";
    pri(tx);
    cout<<"."<<endl;
    cout<<"If you want to order a pizza, you should call: ";
    pri(pz);
    cout<<"."<<endl;
    cout<<"If you want to go to a cafe with a wonderful girl , you should call: ";
    pri(gl);
    cout<<"."<<endl;
}
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast;
    int t=1;
    solve();
    return 0;
}

