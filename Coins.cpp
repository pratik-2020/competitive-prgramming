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
    string a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    if((a == "A>B" && b == "B>C" && c == "A>C") || (b == "A>B" && a == "B>C" && c == "A>C") || (c == "A>B" && b == "B>C" && a == "A>C") || (a == "A>B" && c == "B>C" && b == "A>C")){
        cout<<"A B C";
        return;
    }
    if((a == "A>B" && b == "B<C" && c == "A>C") || (b == "A>B" && a == "B<C" && c == "A>C") || (a == "A>B" && c == "B<C" && b == "A>C") || (c == "A>B" && b == "B<C" && a == "A>C")){
        cout<<"A C B";
        return;
    }
    if((a == "A<B" && b == "B>C" && c == "A>C") || (b == "A<B" && a == "B>C" && c == "A>C") || (c == "A<B" && b == "B>C" && a == "A>C") || (a == "A<B" && c == "B>C" && b == "A>C")){
        cout<<"B A C";
        return;
    }
    if((a == "A<B" && b == "B>C" && c == "A<C") || (b == "A<B" && a == "B>C" && c == "A<C") || (a == "A<B" && c == "B>C" && b == "A<C") || (c == "A<B" && b == "B>C" && a == "A<C")){
        cout<<"B C A";
        return;
    }
    if((a == "A>B" && b == "B<C" && c == "A<C") || (b == "A>B" && a == "B<C" && c == "A<C") || (c == "A>B" && b == "B<C" && a == "A<C") || (a == "A>B" && c == "B<C" && b == "A<C")){
        cout<<"C A B";
        return;
    }
    if((a == "A<B" && b == "B<C" && c == "A<C") || (b == "A<B" && a == "B<C" && c == "A<C") || (a == "A<B" && c == "B<C" && b == "A<C") || (c == "A<B" && b == "B<C" && a == "A<C")){
        cout<<"C B A";
        return;
    }
        cout<<"Impossible";
}
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast;
    int t=1;
    solve();
    return 0;
}

