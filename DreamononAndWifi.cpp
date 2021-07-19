#include <bits/stdc++.h>
#include<string.h>
#include<string>
int abs(int a){
    return a>0?a:(-1)*a;
}
int fact(int a){
    int ft=1;
    for(int i=1; i<=a; i++){
        ft*=i;
    }
    return ft;
}
void solve(){
    string s1,s2;
    cin>>s1>>s2;
    int n = s1.length();
    int final_loc = 0;
    for(int i=0; i<n; i++){
        if(s1[i] == '+'){
            final_loc++;
        }
        else{
            final_loc--;
        }
    }
    int current_final_loc=0, que=0;
    for(int i=0; i<n; i++){
        if(s[i] == '+'){
            current_final_loc++;
        }
        else if(s[i] == '-'){
            current_final_loc--;
        }
        else{
            que++;
        }
    }
    if(current_final_loc == final_loc){
        if(que%2 == 0){
            cout<<"0.5";
            return;
        }
        cout<<"0.0";
        return;
    }
    if(abs(current_final_loc - final_loc) == que){
        cout<<(1/pow(2,que));
        return;
    }
    int mins=0, pls=0;
    while(que > 0){
        if(current_fianl_loc > final_loc){
            que--;
            current_final_loc--;
            mins++;
        }
        else if(final_loc > current_final_loc){
            current_final_loc++;
            que--;
            pls++;
        }
        else{
            if(que%2 != 0){
                cout<<"0.0";
                return;
            }
        }
    }
    if(current_final_loc != final_loc){
        cout<<"0.0";
        return;
    }
    long long it = (fact(min(pls,mins))/fact(que-min(mins,pls)))*(fact(que-min(pls,mins))/fact(min(pls,mins)));
    cout<<it;
    return;
}
int main(){
    solve();
}
