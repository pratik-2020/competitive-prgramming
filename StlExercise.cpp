#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 2000;
    long long fact=1;
    for(int i=1; i<=n; i++){
        fact = fact*i;
    }
    cout<<fact<<endl;
    return 0;
}
