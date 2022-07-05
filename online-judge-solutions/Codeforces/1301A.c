//https://codeforces.com/problemset/problem/1301/A
//Lang		:	GNU C11
//Time		:	15 ms
//Memory	:	0 KB
#include<stdio.h>
#include<string.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char a[101],b[101],c[101];
		scanf("%s%s%s",a,b,c);
		int r=0;
		for(int i=0;i<strlen(a);i++){
			if(c[i]==b[i] || c[i]==a[i]) r++;
		}
		r==strlen(a)? printf("YES\n"):printf("NO\n");
	}
}
