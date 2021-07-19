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
ll minm(ll a, ll b){
    return a<b?a:b;
}
void solve(){
    int n;
    cin>>n;
    int a[n];
    fill(a,n);
    if(n == 1){
        cout<<1<<endl;
        return;
    }
    sort(a,a+n);
    int denom=a[0], denmz=a[1], o=0,j=-100;
    if(a[0] == a[1] && a[1] == 1){
        denom = 1;
        a[n-1]=1;
        ll sm =0;
        for(int i=0; i<n; i++){
            sm+=a[i];
        }
        cout<<sm<<endl;
        return;
    }
    if(a[0] == 1){
        n ==1?denom=a[0]:denom= a[1];
        for(int i=2; i<n; i++){
            int t = __gcd(a[i],denom);
            if(t == 1){
                denom=1;
                break;
            }
            else{
                denom = t;
            }
        }
        if(denom != 1){
            a[0] = denom;
        }
        else{
            a[n-1] = 1;
        }
        ll sm=0;
        for(int i=0; i<n; i++){
            //cout<<denom<<endl;
            sm+=(a[i]/denom);
            //cout<<sm<<endl;
        }
        cout<<sm<<endl;
        return;
    }
    else{
        for(int i=1; i<n; i++){
            int t = __gcd(a[i],denom);
            //cout<<t<<" ";
            if(t == 1 && o == 0){
                o++;
                //cout<<"j";
                j=i;
            }
            else if(t == 1 && o == 1){
                denom=1;
                break;
            }
            else{
                denom=t;
            }
        }
        //cout<<endl;
        for(int i=2; i<n; i++){
            int t = __gcd(a[i],denmz);
            if(t == 1){
                denmz = 1;
                break;
            }
            else{
                denmz = t;
            }
        }
        if(max(denom, denmz) == denom){
            if(denom == 1){
                a[n-1] = 1;
            }
            else{
                if(j != -100){
                    //cout<<"h";
                    a[j] = denom;
                }
                else{
                    a[n-1] = denom;
                }
            }
        }
        else{
            int x = __gcd(a[0], denmz);
            if(x == denmz){
                a[n-1] = denmz;
            }
            else{
                a[0] = denmz;
            }
        }
        ll sm=0;
        int t = max(denmz, denom);
        for(int i=0; i<n; i++){
            sm+=(a[i]/t);
        }
        /*for(int i=0; i<n; i++){
            cout<<a[i]<<" ";
        }*/
        cout<<sm<<endl;//" "<<denom<<" "<<denmz<<endl;
    }
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

