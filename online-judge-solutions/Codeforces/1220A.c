//https://codeforces.com/problemset/problem/1220/A
//Lang		:	GNU C11
//Time		:	109 ms
//Memory	:	100 KB
#include<stdio.h>
#include<string.h>
int main(){
	int n;
	char s[100000];
	while(scanf("%d%s",&n,s)!=EOF){
		int nzero=0,nuno=0;
		for(int i=0;i<strlen(s);i++){
			if(s[i]=='z') nzero++;
			if(s[i]=='n') nuno++;
		}
		for(int i=0;i<nuno;i++){printf("1 ");}
		for(int i=0;i<nzero;i++){printf("0 ");}
		printf("\n");
	}
	return 0;
}
