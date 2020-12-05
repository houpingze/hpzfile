#include<iostream>
typedef unsigned long long ull;
using namespace std;
int n,cnt,m;
int main(){
	cin>>n;
	int a=0,b=0;
	while(n--){
		int x,y;
		cin>>x>>y;
		int w=max(x,y),c=min(x,y);
		x=w,y=c;
		if(a>b) a+=y,b+=x;
		else a+=x,b+=y;
		cout<<a<<' '<<b<<endl<<endl;
	}
	cout<<max(a,b)-min(a,b);
}

