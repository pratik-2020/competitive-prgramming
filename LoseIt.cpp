#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int d[6] = {4,8,15,16,23,42};
    vector<int> dp[43];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        if(a[i] == 4){
            if(dp[4].size() == 0){
                dp[4].push_back(1);
                dp[8].push_back(0);
                dp[15].push_back(0);
                dp[16].push_back(0);
                dp[23].push_back(0);
                dp[42].push_back(0);
            }
            else{
                dp[4].push_back(dp[4][dp[4].size()-1]+1);
                dp[8].push_back(dp[8][dp[8].size()-1]);
                dp[15].push_back(dp[15][dp[15].size()-1]);
                dp[16].push_back(dp[16][dp[16].size()-1]);
                dp[23].push_back(dp[23][dp[23].size()-1]);
                dp[42].push_back(dp[42][dp[42].size()-1]);
            }
        }
        else if(a[i] == 8){
            if(dp[8].size() == 0){
                dp[4].push_back(0);
                dp[8].push_back(1);
                dp[15].push_back(0);
                dp[16].push_back(0);
                dp[23].push_back(0);
                dp[42].push_back(0);
            }
            else{
                dp[4].push_back(dp[4][dp[4].size()-1]);
                dp[8].push_back(dp[8][dp[8].size()-1]+1);
                dp[15].push_back(dp[15][dp[15].size()-1]);
                dp[16].push_back(dp[16][dp[16].size()-1]);
                dp[23].push_back(dp[23][dp[23].size()-1]);
                dp[42].push_back(dp[42][dp[42].size()-1]);
            }
        }
        else if(a[i] == 15){
            if(dp[15].size() == 0){
                dp[4].push_back(0);
                dp[8].push_back(0);
                dp[15].push_back(1);
                dp[16].push_back(0);
                dp[23].push_back(0);
                dp[42].push_back(0);
            }
            else{
                dp[4].push_back(dp[4][dp[4].size()-1]);
                dp[8].push_back(dp[8][dp[8].size()-1]);
                dp[15].push_back(dp[15][dp[15].size()-1]+1);
                dp[16].push_back(dp[16][dp[16].size()-1]);
                dp[23].push_back(dp[23][dp[23].size()-1]);
                dp[42].push_back(dp[42][dp[42].size()-1]);
            }
        }
        else if(a[i] == 16){
            if(dp[16].size() == 0){
                dp[4].push_back(0);
                dp[8].push_back(0);
                dp[15].push_back(0);
                dp[16].push_back(1);
                dp[23].push_back(0);
                dp[42].push_back(0);
            }
            else{
                dp[4].push_back(dp[4][dp[4].size()-1]);
                dp[8].push_back(dp[8][dp[8].size()-1]);
                dp[15].push_back(dp[15][dp[15].size()-1]);
                dp[16].push_back(dp[16][dp[16].size()-1]+1);
                dp[23].push_back(dp[23][dp[23].size()-1]);
                dp[42].push_back(dp[42][dp[42].size()-1]);
            }
        }
        else if(a[i] == 23){
            if(dp[23].size() == 0){
                dp[4].push_back(0);
                dp[8].push_back(0);
                dp[15].push_back(0);
                dp[16].push_back(0);
                dp[23].push_back(1);
                dp[42].push_back(0);
            }
            else{
                dp[4].push_back(dp[4][dp[4].size()-1]);
                dp[8].push_back(dp[8][dp[8].size()-1]);
                dp[15].push_back(dp[15][dp[15].size()-1]);
                dp[16].push_back(dp[16][dp[16].size()-1]);
                dp[23].push_back(dp[23][dp[23].size()-1]+1);
                dp[42].push_back(dp[42][dp[42].size()-1]);
            }
        }
        else if(a[i] == 42){
            if(dp[42].size() == 0){
                dp[4].push_back(0);
                dp[8].push_back(0);
                dp[15].push_back(0);
                dp[16].push_back(0);
                dp[23].push_back(0);
                dp[42].push_back(1);
            }
            else{
                dp[4].push_back(dp[4][dp[4].size()-1]);
                dp[8].push_back(dp[8][dp[8].size()-1]);
                dp[15].push_back(dp[15][dp[15].size()-1]);
                dp[16].push_back(dp[16][dp[16].size()-1]);
                dp[23].push_back(dp[23][dp[23].size()-1]);
                dp[42].push_back(dp[42][dp[42].size()-1]+1);
            }
        }
    }
    int c = 1000000007;
    for(int i=0; i<6; i++){
        c = min(c,dp[d[i]][n-1]);
    }
    //cout<<c;
    cout<<endl<<endl;
    for(int i=0; i<6; i++){
        for(int j=0; j<n; j++){
            cout<<dp[d[i]][j]<<" ";
        }
        cout<<endl;
    }
    if(c == 0){
        cout<<n;
    }
    else{
        long long ct=0;
        for(int i=0; i<n; i++){
            if(dp[d[0]][i] > c || dp[d[1]][i] > c || dp[d[2]][i] > c || dp[d[3]][i] > c || dp[d[4]][i] > c || dp[d[5]][i] > c){
                for(int j=0; j<6; j++){
                    ct+=1;//(dp[d[j]][n-1]-c);
                }
                break;
            }
            else{
                if(dp[8][i] > dp[4][i]){
                    ct+=1;//(dp[8][i] - dp[4][i]);
                }
                else if(dp[15][i] > dp[8][i]){
                    ct+=1;//(dp[15][i] - dp[8][i]);
                }
                else if(dp[16][i] > dp[15][i]){
                    ct+=1;//(dp[16][i] - dp[15][i]);
                }
                else if(dp[23][i] > dp[16][i]){
                    ct+=1;//(dp[23][i] - dp[16][i]);
                }
                else if(dp[42][i] > dp[23][i]){
                    ct+=1;//(dp[42][i] - dp[23][i]);
                }
            }
        }
        cout<<ct;
    }
}
