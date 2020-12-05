#include<iostream>
typedef unsigned long long ull;
using namespace std;
int n,cnt,m;
void dfs(int x,int ans,int c){
    if(ans==n&&x!=n){
        cnt++;
        return ;
    }
    if(ans>n) return ; 
    for(int i=x+1;i+ans<=n;i++){
        dfs(i,ans+i,c+1);
    }
}
int main(){
    cin>>n;
    dfs(0,0,1);
    cout<<cnt;
}

