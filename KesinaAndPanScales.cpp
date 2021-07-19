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
    string s,z;
    cin>>s;
    cin>>z;
    int l,r;
    for(int i=0; i<s.length(); i++){
        if(s[i] == '|'){
            l = i;
            break;
        }
    }
    r = s.length() - l -1;
    if(l == r){
        if(z.length()%2 != 0){
            cout<<"Impossible";
            return;
        }
        else{
            for(int i=0; i<z.length()/2; i++){
                s = z[i] + s;
            }
            for(int i = z.length()/2; i<z.length(); i++){
                s = s + z[i];
            }
        }
    }
    else{
        if( abs(l-r) > z.length()){
            cout<< "Impossible";
            return;
        }
        else if( abs(l-r) == z.length()){
            if(l > r){
                s = s + z;
            }
            else{
                s = z + s;
            }
        }
        else{
            if( (z.length() - abs(l-r))%2 == 1){
                cout<<"Impossible";
                return;
            }
            else{
                if(l > r){
                    for(int i=0; i<abs(l-r); i++){
                        s = s + z[i];
                    }
                    for(int i= abs(l-r); i<z.length(); i+=2){
                        s = z[i]+s+z[i+1];
                    }
                }
                else{
                    for(int i=0; i<abs(l-r); i++){
                        s = z[i] + s;
                    }
                    for(int i= abs(l-r); i<z.length(); i+=2){
                        s = z[i]+s+z[i+1];
                    }
                }
            }
        }
    }
    cout<<s;
}
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast;
    int t=1;
    solve();
    return 0;
}

