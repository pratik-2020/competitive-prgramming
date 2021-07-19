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
    int r1,c1,r2,c2;
    cin>>r1>>c1>>r2>>c2;
    int r,b,k=0;
        if(r1 == r2 || c1 == c2){
            if(r1 == r2 && c1 == c2){
                r=0;
                k=0;
            }else{
                if(c1 != c2){
                    r=1;
                }
                else{
                    r = 1;
                }
            }
        }
        else{
            r=2;
        }
        k = k + min(abs(r1-r2), abs(c1-c2));
        if(min(abs(r1-r2), abs(c1-c2)) == abs(r1-r2)){
            k+=(abs(c1-c2) - min(abs(r1-r2), abs(c1-c2)));
        }
        else{
            k+=(abs(r1-r2) - min(abs(r1-r2), abs(c1-c2)));
        }
        if((abs(r1-r2)+abs(c1-c2))%2 == 0){
         //   cout<<"l";
            if(abs(r1-r2) == abs(c1-c2)){
                b=1;
            }
            else if(r1 == r2 && c1 == c2){
                b=0;
            }
            else{
                b=2;
            }
        }
        else{
            if(abs(r1-r2) == abs(c1-c2)){
                b=1;
            }
            else{
                b=0;
            }
        }
    cout<<r<<" "<<b<<" "<<k;
}
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast;
    int t=1;
    solve();
    return 0;
}

