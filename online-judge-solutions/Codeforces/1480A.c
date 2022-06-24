//https://codeforces.com/problemset/problem/1480/A
//Lang		:	GNU C11
//Time		:	124 ms
//Memory	:	0 KB
#include<stdio.h>
#include<string.h>
char cp(char c){
	if(c=='a') return 'b';
	return 'a';
}
char ci(char c){
	if(c=='z') return 'y';
	return 'z';
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char s[50];
		scanf("%s",s);
		for(int i=0;i<strlen(s);i++){
			if(i%2==0) printf("%c",cp(s[i]));
			else printf("%c",ci(s[i]));
		}printf("\n");
	}
	return 0;
}
