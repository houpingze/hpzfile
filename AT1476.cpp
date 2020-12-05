#include<bits/stdc++.h>
using namespace std;
int m=99999999,n,x,a[101010];
bool p(int x){
	if(x==1) return false;
	for(int i=2;i*i<=x;i++) if(x%i==0) return false;
	return true;
} 
int main(){
	cin>>n;
	if(n==1) cout<<"Not Prime";
	else if(p(n)||n%2!=0&&n%5!=0&&n%3!=0) cout<<"Prime";
	else cout<<"Not Prime";
	cout<<endl;;
}

