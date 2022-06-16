//https://codeforces.com/problemset/problem/1688/B
//Lang		:	GNU C11
//Time		:	61 ms
//Memory	:	800 KB
#include <stdio.h>
int NDos(int n){
	int dos=0;
	while(!(n&(1<<0))){
		if(!(n&(1<<0))) dos++;
		n/=2;
	}
	return dos;
}
int min(int x,int y){
	return y^((x^y) & -(x<y));
}
int main(void){
	int t,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		int a[n],par=0,impar=0,r,dosMinimo=31;
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
			a[i]&(1<<0) ? impar++:par++;dosMinimo=min(dosMinimo,NDos(a[i]));
		}
		if(par==0) r=0;
		else if(par!=0 && impar!=0) r=par;
		else r=dosMinimo+n-1;
		printf("%d\n",r);
	}
}
