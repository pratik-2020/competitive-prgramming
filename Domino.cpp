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
    int n,oa=0,ob=0,ind1=-100,ind2=-100;
    cin>>n;
    int a[n], b[n];
    for(int i=0; i<n; i++){
        cin>>a[i]>>b[i];
        if(a[i]%2 == 1){
            oa+=1;
        }
        if(b[i]%2 == 1){
            ob+=1;
        }
        if(a[i]%2 == 0 && b[i]%2 == 1 && ind1 == -100){
            ind1 = i;
        }
        else if(a[i]%2 == 1 && b[i]%2 == 0 && ind2 == -100){
            ind2 = i;
        }
    }
    if(oa%2 != ob%2){
        cout<<-1;
        return;
    }
    else{
        if(oa%2 == 0){
            cout<<0;
            return;
        }
        else{
            if(ind1 == -100 && ind2 == -100){
                cout<<-1;
                return;
            }
            else{
                cout<<1;
                return;
            }
        }
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

