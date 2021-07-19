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
typedef double ld;
#define fill(a, n)              \
    for (int i = 0; i < n; i++) \
    cin >> a[i]
void fun(int n){
    if(n == 0) cout<<"zero"<<endl;
    else if(n == 1) cout<<"one"<<endl;
    else if(n == 2) cout<<"two"<<endl;
    else if(n == 3) cout<<"three"<<endl;
    else if(n == 4) cout<<"four"<<endl;
    else if(n == 5) cout<<"five"<<endl;
    else if(n == 6) cout<<"six"<<endl;
    else if(n == 7) cout<<"seven"<<endl;
    else if(n == 8) cout<<"eight"<<endl;
    else if(n == 9) cout<<"nine"<<endl;
}
void solve(){
    int n;
    cin>>n;
    if(n<10){
        fun(n);
    }
    else if(n == 10){
        cout<<"ten"<<endl;
    }
    else if(n == 11){
        cout<<"eleven"<<endl;
    }
    else if(n == 12){
        cout<<"twelve"<<endl;
    }
    else if(n == 13){
        cout<<"thirteen"<<endl;
    }
    else if(n == 14){
        cout<<"fourteen"<<endl;
    }
    else if(n == 15){
        cout<<"fifteen"<<endl;
    }
    else if(n == 16){
        cout<<"sixteen"<<endl;
    }
    else if(n == 17){
        cout<<"seventeen"<<endl;
    }
    else if(n == 18){
        cout<<"eighteen"<<endl;
    }
    else if(n == 19){
        cout<<"nineteen"<<endl;
    }
    else if(n == 20){
        cout<<"twenty"<<endl;
    }
    else if(n == 30){
        cout<<"thirty"<<endl;
    }
    else if(n == 40){
        cout<<"forty"<<endl;
    }
    else if(n == 50){
        cout<<"fifty"<<endl;
    }
    else if(n == 60){
        cout<<"sixty"<<endl;
    }
    else if(n == 70){
        cout<<"seventy"<<endl;
    }
    else if(n == 80){
        cout<<"eighty"<<endl;
    }
    else if(n == 90){
        cout<<"ninety"<<endl;
    }
    else if(n<30){
        cout<<"twenty ";
        fun(n%20);
    }
    else if(n<40){
        cout<<"thirty ";
        fun(n%30);
    }else if(n<50){
        cout<<"forty ";
        fun(n%40);
    }
    else if(n<60){
        cout<<"fifty ";
        fun(n%50);
    }
    else if(n<70){
        cout<<"sixty ";
        fun(n%60);
    }
    else if(n<80){
        cout<<"seventy ";
        fun(n%70);
    }
    else if(n<90){
        cout<<"eighty ";
        fun(n%80);
    }
    else if(n<100){
        cout<<"ninety ";
        fun(n%90);
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

