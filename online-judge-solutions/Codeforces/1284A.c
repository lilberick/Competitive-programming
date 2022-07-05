//https://codeforces.com/problemset/problem/1284/A
//Lang		:	GNU C11
//Time		:	31 ms
//Memory	:	0 KB
#include<stdio.h>
int main(){
	int n,m,a,q;
	scanf("%d%d",&n,&m);
	char s[n][20],t[m][20];
	for(int i=0;i<n;i++){scanf("%s",s[i]);}
	for(int i=0;i<m;i++){scanf("%s",t[i]);}
	scanf("%d",&q);
	while(q--){
		scanf("%d",&a);
		printf("%s%s\n",s[((a%n)+(n-1))%n],t[((a%m)+(m-1))%m]);
	}
}
