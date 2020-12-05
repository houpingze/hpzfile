#include<iostream>
#include<cstdio>
#include<map>
typedef unsigned long long ull;
using namespace std;
int n,cnt,m;
string a[1001];
map<string,string>  p;
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		string t="";
		for(int j=a[i].size();j>=0;j--){
			t+=a[i][j];
			if(p[t]=="") p[t]=a[i];
		}
	}
	while(m--){
		string s;
		cin>>s;
		if(!p[s].empty()) cout<<p[s];
		else cout<<-1;
		cout<<endl;
	}
}

