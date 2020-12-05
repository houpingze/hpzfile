#include<iostream>
#include<cstring>
typedef unsigned long long ull;
using namespace std;
int n,cnt,m,a[1000000],b[1000000],c[1000000];
string jia(string x,string y){ 
	memset(c,0,sizeof(c));
	a[0]=x.size(),b[0]=y.size();
	for(int i=1;i<=a[0];i++){
		a[i]=x[a[0]-i]-'0';
	}
	for(int i=1;i<=b[0];i++){
		b[i]=y[b[0]-i]-'0';
	}
	int l=max(a[0],b[0]);
	for(int i=1;i<=l;i++){
		c[i]+=a[i]+b[i];
		c[i+1]=c[i]/10;
		c[i]%=10;
		c[0]=max(c[0],i);
		if(c[i+1]) c[0]=i+1;
	}
	string aaa="";
	for(int i=c[0];i>=1;i--){
		aaa+=c[i]+'0';
	}
	return aaa;
	
}
int main(){
	string s;
	cin>>s;
	
	if((s[s.size()-1]-'0')%2) {
		s=jia(s,s);
		s[s.size()-1]--;
		if(s[s.size()-1]=='0'-1) s[s.size()-1]='9',s[s.size()-2]--;
	}
	else s=jia(s,s);
	while(s[0]=='0') s.erase(0,1); 
	cout<<s;
}

