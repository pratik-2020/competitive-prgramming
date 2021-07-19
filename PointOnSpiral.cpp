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
    int x,y;
    cin>>x>>y;
    int a[405],b[405];
    a[0] = 1;
    b[0] = 0;
    a[1] = b[1] = 1;
    a[2] = -1;
    b[2] = 1;
    a[3] = b[3] = -1;
    if(x<=1 && y==0 && x>=0){
        cout<<0;
        return;
    }
    for(int i=4; i<=404; i++){
        if(i%4 == 0){
            a[i] = abs(a[i-1])+1;
            b[i] = b[i-1];
        }
        else if(i%4 == 1){
            a[i] = a[i-1];
            b[i] = abs(b[i-1]) + 1;
        }
        else if(i%4 == 2){
            a[i] = -a[i-1];
            b[i] = b[i-1];
        }
        else{
            a[i] = a[i-1];
            b[i] = -b[i-1];
        }
    }
    /*for(int i=0; i<400; i++){
        cout<<a[i]<<" "<<b[i]<<endl;
    }*/
    if(abs(x) < abs(y)){
        for(int i=0; i<400; i++){
            if(b[i] == y){
                if(a[i] == x){
                    cout<<i;
                    return;
                }
                cout<<i+1;
                return;
            }
        }
    }
    else if(abs(x) > abs(y)){
        for(int i=0; i<400; i++){
            if(a[i] == x){
                if(b[i] == y){
                    cout<<i;
                    return;
                }
                cout<<i+1;
                return;
            }
        }
    }
    else{
        if(x>0 && y>0){
            for(int i=0; i<400; i++){
                if(a[i] == x && a[i] == b[i]){
                    cout<<i;
                    return;
                }
            }
        }
        else if(x <0 && y < 0){
            for(int i=0; i<400; i++){
                if(a[i] == x && a[i] == b[i]){
                    cout<<i;
                    return;
                }
            }
        }
        else if(x >0 && y< 0){
            for(int i=0; i<400; i++){
                if(b[i] == y){
                    cout<<i+1;
                    return;
                }
            }
        }
        else{
            for(int i=0; i<400; i++){
                if(a[i] == x && y == b[i]){
                    cout<<i;
                    return;
                }
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

