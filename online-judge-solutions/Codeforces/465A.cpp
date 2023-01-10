//https://codeforces.com/problemset/problem/465/A
//Lang		:	GNU C11
//Time		:	15 ms
//Memory	:	0 KB
#include<stdio.h>
int main(){
	int n,x;scanf("%d",&n);
	int r=n;
	for(int i=0;i<n;i++){
		scanf("%1d",&x);
		if(x==0){r=i+1;break;}
	}
	printf("%d",r);
	return 0;
}
