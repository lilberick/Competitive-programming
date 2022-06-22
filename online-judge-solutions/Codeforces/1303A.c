//https://codeforces.com/problemset/problem/1303/A
//Lang		:	GNU C11
//Time		:	15 ms
//Memory	:	0 KB
#include <stdio.h>
#include <string.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char s[100],*p;
		scanf("%s",s);
		p=strchr(s,'1');
		int l=p-s;
		p=strrchr(s,'1');
		int r=p-s;
		int c=0;
		for(int i=0;i<strlen(s);i++){
			if(s[i]=='1') c++;
		}
		c==0 ? printf("0\n"):printf("%d\n",(r-l+1)-c);
	}
	return 0;
}
