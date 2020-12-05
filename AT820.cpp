#include<iostream>
using namespace std;
int m=99999999,n,x;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x;
		m=min(m,x);
	}
	cout<<m<<endl;
}
