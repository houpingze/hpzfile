#include<iostream>
using namespace std;
int n,a[101010],mx;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int x=1;x<=n;x++){
		for(int y=x+1;y<=n;y++){
			for(int k=x;k<=y;k++){
				if(a[k-1]<a[k]>a[k+1]){
					int f=0;
					for(int i=x;i<k;i++){
						if(!(a[i]<a[i+1])){
							f=1;
							break;
						}
					}
					if(f==1) continue;
					for(int i=k+1;i<=y;i++){
						if(!(a[i]>a[i+1])){
							f=1;
							break;
						}	
					}
					if(f==1) continue;
					mx=max(mx,y-x+1);
				}
			}
		}
	}
	cout<<mx;
	return 0;
}

