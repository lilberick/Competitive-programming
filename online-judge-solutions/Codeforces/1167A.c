//https://codeforces.com/problemset/problem/1167/A
//Lang		:	GNU C11
//Time		:	15 ms
//Memory	:	0 KB
#include<stdio.h>
#include<string.h>
int main(){
	int t,n;
	scanf("%d",&t);
	while(t--){
		char s[100];
		scanf("%d%s",&n,s);
		int i=-1;
		for(int j=0;j<=strlen(s) && i<0;j++){
			if(s[j]=='8'){i=j;}
		}
		(i>=0 && n-i>=11) ? printf("YES\n"):printf("NO\n");
	}
}
