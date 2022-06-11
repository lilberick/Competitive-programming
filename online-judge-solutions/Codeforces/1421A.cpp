//https://codeforces.com/problemset/problem/1421/A
//Lang		:	GNU C11
//Time		:	62 ms
//Memory	:	0 KB
#include<stdio.h>
int main(){
	int t,a,b;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&a,&b);
		printf("%d\n",a^b);
	}
	return 0;
}
