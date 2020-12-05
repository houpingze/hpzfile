#include<iostream>
typedef unsigned long long ull;
using namespace std;
int n,cnt,m,a[1000011];
int main(){
    cin>>m>>n;
    for(int i=1;i<=m;i++){
        cin>>a[i];
    } 
    int l=1,r=1000000;
    while(l<=r){
        int mid=(l+r)/2;
        cnt=0;
        for(int i=1;i<=m;i++) cnt+=(a[i]/mid);
        if(cnt>n) l=mid;
        else r=mid;
//        cout<<l<<' '<<r<<endl; 
        if(r==l+1) break;
    }
    cout<<r;
}

