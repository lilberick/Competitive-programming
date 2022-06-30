//https://codeforces.com/problemset/problem/1684/A
//Lang		:	GNU C11
//Time		:	46 ms
//Memory	:	0 KB
#include<stdio.h>
#include<string.h>
int min(int x,int y){
	return y^(x^y) & -(x<y);
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char s[10];
		scanf("%s",s);
		int m=1000000000,r,n=strlen(s);
		for(int i=0;i<n;i++){
			m=min(m,s[i]-48);
		}
		if(n==1) r=s[0]-48;
		else if(n==2) r=s[1]-48;
		else r=m;
		printf("%d\n",r);
	}
}
