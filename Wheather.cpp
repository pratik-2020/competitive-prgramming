#include<bits/stdc++.h>
void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int i=0;
    int ct=0;
    while(i<n && a[i] == 0){
        i++;
        ct++;
    }
    int x= a[i];
    for(; i<n; i++){
        if(a[i] == 0){
            ct++;
        }

    }
}
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    solve();
}
