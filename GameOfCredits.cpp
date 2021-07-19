#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s,m;
    cin>>s;
    cin>>m;
    vector<int> dp1(10,0), dp2(10,0);
    for(int i=0; i<n; i++){
        dp1[s[i]-'0']++;
        dp2[m[i]-'0']++;
        //cout<<"h\n";
    }
    /*for(int i=0; i<n; i++){
        dp2[m[i]-'0']++;
        //cout<<dp2[m[i]-'0']<<endl;
    }*/
    vector<int> v = dp2;
    long long maxs=0, minm=0;
    for(int i=0; i<n; i++){
        if(dp2[s[i]-'0']){
            dp2[s[i]-'0']--;
            continue;
        }
        else{
            int g=1;
            for(int j= (s[i]-'0')+1; j<10; j++){
                if(dp2[j]){
                    dp2[j]--;
                    g=0;
                    break;
                }
            }
            if(g){
                minm++;
            }
        }
    }
    /*for(int i=0; i<10; i++){
        cout<<dp1[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<10; i++){
        cout<<dp2[i]<< " ";
    }
    cout<<endl;*/
    for(int i=0; i<n; i++){
        //cout<<"k";
        for(int j = (s[i]-'0')+1; j<10; j++){
            if(v[j]){
                v[j]--;
                maxs++;
                break;
            }
        }
        //cout<<maxs<< " ";
    }
    cout<<minm<<endl<<maxs;
}
int main(){
    solve();
}
