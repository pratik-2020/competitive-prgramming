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
    int n,a,b,c;
    cin>>n;
    cin>>a>>b>>c;
    string s;
    cin>>s;
    int r=0,p=0,sc=0;
    for(int i=0; i<n; i++){
        if(s[i] == 'R'){
            r++;
        }
        else if(s[i] == 'P'){
            p++;
        }
        else{
            sc++;
        }
    }
    int maxscore = min(r,b) + min(p,c) + min(sc,a);
    if(maxscore < ceil((double)n/2)){
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
    for(int i=0; i<n; i++){
        if(s[i] == 'R'){
            if(b){
                cout<<"P";
                b--;
                r--;
            }
            else{
                r--;
                if(a > sc){
                    cout<<"R";
                    a--;
                }
                else if(c > p){
                    cout<<"S";
                    c--;
                }
                else{
                    int z = max(sc-a,p-c);
                    if(z == sc-a){
                        cout<<"R";
                        a--;
                    }
                    else{
                        cout<<"S";
                        c--;
                    }
                }
            }
        }
        else if(s[i] == 'P'){
            p--;
            if(c){
                cout<<"S";
                c--;
            }
            else{
                //r--;
                if(a > sc){
                    cout<<"R";
                    a--;
                }
                else if(b > r){
                    cout<<"P";
                    b--;
                }
                else{
                    int z = max(sc-a,r-b);
                    if(z == sc-a){
                        cout<<"R";
                        a--;
                    }
                    else{
                        cout<<"P";
                        b--;
                    }
                }
            }
        }
        else{
            sc--;
            if(a){
                cout<<"R";
                a--;
            }
            else{
                //r--;
                if(b > r){
                    cout<<"P";
                    b--;
                }
                else if(c > p){
                    cout<<"S";
                    c--;
                }
                else{
                    int z = max(r-b,p-c);
                    if(z == r-b){
                        cout<<"P";
                        b--;
                    }
                    else{
                        cout<<"S";
                        c--;
                    }
                }
            }
        }
    }
    cout<<endl;
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

