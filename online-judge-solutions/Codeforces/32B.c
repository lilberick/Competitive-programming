//https://codeforces.com/problemset/problem/32/B
//Lang		:	GNU C11
//Time		:	30 ms
//Memory	:	0 KB
#include<stdio.h>
#include<string.h>
int main(){
	char s[200];
	while(scanf("%s",s)!=EOF){
		while(strlen(s)!=0){
			if(s[0]=='.'){printf("0");}
			else{
				printf(s[1]=='.' ? "1" : "2");
				memmove(s,s+1,strlen(s));
			}
			memmove(s,s+1,strlen(s));
		}printf("\n");
	}
	return 0;
}
