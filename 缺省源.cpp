#include<bits/stdc++.h>
#define reg register int
#define inf 0x3f3f3f3f
#define MAXN 100001
#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b
#define F(s,e) for(int i=s;i<=e;++i)
using namespace std;
int read(){
	int res=0,fs=1;
	char c=getchar();
	while(!(c>='0' && c<='9')){
		if(c=='-')fs=-1;
		c=getchar();
	}
	while(c>='0' && c<='9')res=res*10+c-'0',c=getchar();
	return res*fs;
}
void print(int x)
{
    if(x<0)
    {
        putchar('-');
        x=-x;
    }
    if(x>9)
        print(x/10);
    putchar(x%10+'0');
}
int n,cnt,m,a[5010],ans,tmp;
string s;
int main() {
//	freopen(".in","r",stdin);
//	freopen(".out","w",stdout);
	
    return 0;
}
