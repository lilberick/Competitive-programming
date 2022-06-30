//https://codeforces.com/problemset/problem/1146/A
//Lang		:	GNU C11
//Time		:	15 ms
//Memory	:	0 KB
#include<stdio.h>
#include<string.h>
int min(int x,int y){
	return y^(x^y) & -(x<y);
}
int main(){
	char s[50];
	scanf("%s",s);
	int x=0;
	for(int i=0;i<strlen(s);i++){
		if(s[i]=='a') x++;
	}
	int n=strlen(s);
	printf("%d\n",min(n,2*x-1));
}
