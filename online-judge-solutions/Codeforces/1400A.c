//https://codeforces.com/problemset/problem/1400/A
//Lang		:	GNU C11
//Time		:	31 ms
//Memory	:	0 KB
#include <stdio.h>
#include <string.h>
int main(){
	int t,n;
	scanf("%d",&t);
	while(t--){
		char s[100];
		scanf("%d%s",&n,&s);
		if(strlen(s)==1){printf("%s\n",s);}
		else{
			char r[50]="",*ra;
			char extremo=s[(2*n-1)/2];
			strncpy(r,&extremo,1);
			for(int i=0;i<strlen(s);i++){
				if(i%2==0 && i>0 && i<strlen(s)-1){
					ra=strncat(r,&s[i],1);
					strcpy(r,ra);
				}
			}
			strncat(r,&extremo,1);
			printf("%s\n",r);
		}
	}
	return 0;
}

