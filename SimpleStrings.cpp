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
    string s;
    cin>>s;
    for(int i=1; i<s.length()-1; i++){
        if(s[i] == s[i-1]){
            if(max((int)s[i+1], (int)s[i-1]) - min((int)s[i+1], (int)s[i-1]) == 1){
                if(max((int)s[i+1], (int)s[i-1]) == (int)s[i] && s[i] == 'y'){
                    s[i] = 'z';
                }
                else if(min((int)s[i+1], (int)s[i-1]) == (int)s[i] && s[i] == 'y'){
                    s[i] = 'x';
                }
                else{
                        if(s[i] == 'z') s[i] = (char)((int)s[i]-2);
                        else s[i] = (char)((int)s[i] + 2);
                }
            }
            else{
                if(s[i] == 'z'){
                    s[i] = 'y';
                }
                else{
                    s[i] = (char)((int)s[i]+1);
                }
            }
        }
    }
    if(s[s.length()-1] == s[s.length()-2]){
        if(s[s.length()-1] == 'z'){
            s[s.length()-1] = 'a';
        }
        else{
            s[s.length()-1] = 'z';
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

