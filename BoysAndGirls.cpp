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
    ifstream fi("input.txt");
    string s;
    vi v;
    while(getline(fi, s)){
        stringstream ss(s);
        string word;
        while(ss >> word){
            stringstream geek(word);
            int x;
            geek>>x;
            v.pb(x);
        }
    }
    //cout<<v[0]<<" "<<v[1];
    int n = v[0];
    int m = v[1];
    string h;
    if(n == m){
        for(int i=0; i<n+m; i++){
            if(i%2 == 0){
                h = h + 'B';
            }
            else{
                h = h + 'G';
            }
        }
        ofstream MyFile("output.txt");
        MyFile << h;
        MyFile.close();
    }
    else if(n>m){
        for(int i=0; i<2*m; i++){
            if(i%2 == 0){
                h = h + 'B';
            }
            else{
                h = h + 'G';
            }
        }
        for(int i=0; i<n-m; i++){
            h = h + 'B';
        }
        ofstream MyFile("output.txt");
        MyFile << h;
        MyFile.close();
    }
    else{
        for(int i=0; i<2*n; i++){
            if(i%2 == 0){
                h = h + 'G';
            }
            else{
                h = h + 'B';
            }
        }
        for(int i=0; i<m-n; i++){
            h = h + 'G';
        }
        //string y = "GBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGBGGGGGGGGGG";
        /*if(y == h){
            cout<<"YES";
        }*/
        ofstream MyFile("output.txt");
        MyFile << h;
        MyFile.close();
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

