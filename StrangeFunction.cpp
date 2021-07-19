#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define fi first
//#define se second
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
typedef map<char,int> mpchar;
#define fill(a, n)              \
    for (int i = 0; i < n; i++) \
    cin >> a[i]
int abs(int a){
    return a<0?-1*a:a;
}
void solve(){
    unsigned long long int i,a,b,c,d,n,m,q,j,k,answer=0,odd=0,even=0,numberof6,numberof64, numberof65;
    string str, str2, str3;
    vi arr, arr1, arr2, arr3, arr4, arr5;
    vvi arra;
//    se s;
    mpchar mapi;
    float f,e;
    cin>>n;
    if(n%2 == 1){
        odd = ((n/2)+1)%MOD;
        even = (n/2)%MOD;
    }
    if(n%2 == 0){
        odd = (n/2)%MOD;
        even = ((n/2))%MOD;
    }
    numberof6 = (n/6)%MOD;
    if(numberof6%2 == 0){
        numberof64 = (numberof6/2)%MOD;
        numberof65 = (numberof6/2)%MOD;
    }
    if(numberof6%2 == 1){
        numberof64 = ((numberof6/2)+1)%MOD;
        numberof65 = (numberof6/2)%MOD;
    }
    answer = ( ((((even-numberof6%MOD)*3)%MOD) + ((odd%MOD)*2) + ((numberof64)%MOD)*4 + (numberof65%MOD)*5))%MOD;
    cout<<answer;
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

