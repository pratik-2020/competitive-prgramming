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
    int n,m;
    cin>>n>>m;
    ll c=0;
    if(n>m){
        while(n>m && n>0 && m>0){
            n-=2;
            m-=1;
            c+=1;
        }
        while(m>n && n>0 && m>0){
            m-=2;
            n-=1;
            c+=1;
        }
        if(m == n && n!=1){
            while(n>1 || m>1){
            if(n == m){
                n-=1;
                m-=2;
                c+=1;
            }
            else{
                m-=1;
                n-=2;
                c+=1;
            }
        }
        }
    }
    else if(m > n){
        while(m>n && n>0 && m>0){
            m-=2;
            n-=1;
            c+=1;
        }
        while(n>m && n>0 && m>0){
            n-=2;
            m-=1;
            c+=1;
        }
        if(m == n && n !=1){
            while(n>1 || m>1){
            if(n == m){
                n-=1;
                m-=2;
                c+=1;
            }
            else{
                m-=1;
                n-=2;
                c+=1;
            }
        }
        }
    }
    else if(n == m && n >1 && m>1){
        while(n>1 || m>1){
            if(n == m){
                n-=1;
                m-=2;
                c+=1;
            }
            else{
                m-=1;
                n-=2;
                c+=1;
            }
        }
    }
    cout<<c;
}
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast;
    int t=1;
    //solve();
    string s = "1532";
    sort(s.begin(), s.end());
    cout<<s;
    return 0;
}

