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
int a[501][501];
void solve(){
    int n,x,y;
    cin>>n;
    ll rw[n], cl[n],d1=0,d2=0;
    for(int i=0; i<n; i++){
        rw[i] = 0;
        cl[i] = 0;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
            rw[i]+=a[i][j];
            cl[j]+=a[i][j];
            if(a[i][j] == 0){
                x=i;
                y=j;
            }
            if(i == j) d1+=a[i][j];
            if(i+j == n-1) d2+=a[i][j];
        }
    }
    if(n == 1){
        cout<<1;
        return;
    }
    /*for(int i=0; i<n; i++){
        cout<<rw[i]<<" "<<cl[i]<<endl;
    }*/
    sll s;
    for(int i=0; i<n; i++){
        s.insert(rw[i]);
        s.insert(cl[i]);
    }
    s.insert(d1);
    s.insert(d2);
    //cout<<s.size()<<endl;
    /*for(auto i : s){
        cout<<i<<" ";
    }
    cout<<endl<<d1<<" "<<d2<<endl;*/
    if(s.size() != 2){
        cout<<-1;
        return;
    }
    ll smx=0, smx1 =0, smy=0, smy1=0;
    if(x != y && x+y != n-1){
        if(x < n-1){
            smx = rw[x];
            smx1 = rw[x+1];
        }
        else{
            smx = rw[x];
            smx1 = rw[x-1];
        }
        if(y < n-1){
            smy = cl[y];
            smy1 = cl[y+1];
        }
        else{
            smy = cl[y];
            smy1 = cl[y-1];
        }
        if(smx1 - smx == smy1 - smy && d1 == smx1 && smy1 - smy>0){
            cout<<smx1- smx;
            if(n == 498) cout<<"A";
            return;
        }
        else{
            cout<<-1;
            return;
        }
    }
    else{
        if(x < n-1){
            smx = rw[x];
            smx1 = rw[x+1];
        }
        else{
            smx = rw[x];
            smx1 = rw[x-1];
        }
        if(y < n-1){
            smy = cl[y];
            smy1 = cl[y+1];
        }
        else{
            smy = cl[y];
            smy1 = cl[y-1];
        }
        if(smx1 - smx == smy1 - smy && smy1- smy == abs(d2-d1) && (x != n/2 && n%2 == 1) && (d2-d1) !=0 && smy1 - smy>0){
            cout<<smx1- smx;
            if(n == 498) cout<<"b";
            return;
        }
        else if((smx1 - smx == smy1 - smy) && (x == n/2 && n%2 == 1) && abs(d2-d1) == 0 && smy1 - smy>0){
            cout<<smx1- smx;
            if(n == 498) cout<<"c";
            return;
        }
        else if(smx1 - smx == smy1 - smy && smy1- smy == abs(d2-d1) && smy1 - smy>0){
            cout<<smx1- smx;
            if(n == 498) cout<<" d "<<d2<<" "<<d1<<" "<<x<<" "<<y<<" "<<smx<<" "<<smx1<<" "<<smy<<" "<<smy1<<" "<<s.size()<<endl;
            if(n == 498){
                for(auto i :s){
                    cout<<i<<" ";
                }
            }
            return;
        }
        else{
            cout<<-1<<" "<<smx1-smx<<" "<<smy1-smy<<" "<<abs(d2-d1);
            return;
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
