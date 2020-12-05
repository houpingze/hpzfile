#include <bits/stdc++.h>
using namespace std;
int n,a,b,k[10010],mn=99999999;
void dfs(int x,int ans){
    if(x==b){ 
        mn=min(mn,ans) ;
        return ;
    }
    if(ans>5) return ;
    for(int i=1;i<=n;i++){
        dfs(x+k[i],ans+1);
        if(x-k[i]>0){
            dfs(x-k[i],ans+1);
        }
    }
}
int main(){
    cin>>n>>a>>b;
    for(int i=1;i<=n;i++) cin>>k[i];
    dfs(a,0);
    cout<<mn;
    return 0;
}
