#include<iostream>
#include<cstring>
typedef unsigned long long ull;
using namespace std;
int n,cnt,m,f[10000];
int id;
int main(){
	string s;
	cin>>s;
	while(s.size()>1){
		id=0;
		memset(f,0,sizeof(f));
		m=0;
		for(int i=0;i<s.size();i++){
			f[s[i]]++;
			if(f[s[i]]>m||(f[s[i]]==m&&s[id]>s[i])){
				id=i;
				m=f[s[i]];
//				cout<<s[id]<<endl;
			}
		}
//		cout<<s[id]<<endl;
		char tmp=s[id];	
		for(int i=0;i<s.size();i++){
			if(s[i]==tmp){
				s.erase(i,1);
				i--;
			}
		}
		if(!s.empty())
		cout<<s<<endl;
	}
}

