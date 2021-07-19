#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a,b;
    cin>>a>>b;
    string s;
    cin>>s;
    int n = s.length();
    int ct=0, x=-1,c=0;
    if(s[0] == '1'){
        ct+=a;
        x=0;
    }
    for(int i=1; i<n; i++){
        if(s[i] == '1' && x == -1){
            ct+=a;
            x=i;
        }
        else if(s[i] == '1' && i-x == 1){
            x=i;
        }
        else if(s[i] == '1' && i-x > 1){
            ct = ct + min(a, (i-x-1)*b);
            x=i;
        }
    }
    cout<<ct<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
