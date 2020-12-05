#include<iostream>
using namespace std;
int n; 
void h(int n,char st,char mid,char ed){
    if(n==1){
        cout<<st<<"->"<<n<<"->"<<ed<<endl;
        return ;
    }
    h(n-1,st,ed,mid);
    cout<<st<<"->"<<n<<"->"<<ed<<endl;
    h(n-1,mid,st,ed);
}
int main(){
    char a,b,c;
    cin>>n>>a>>b>>c;
    h(n,a,c,b);
}
