//https://codeforces.com/problemset/problem/1472/B
//Lang		:	GNU C11
//Time		:	31 ms
//Memory	:	0 KB
#include <stdio.h>
int main(){
	int t,n,a;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		int n1=0,sum=0;
		for(int i=0;i<n;i++){
			scanf("%d",&a);
			if(a==1) n1++;
			sum+=a;
		}
		if(n%2==0){
			sum%2==0 ? printf("YES\n"):printf("NO\n");
		}else{
			n1%2==0 && n1>0 ? printf("YES\n"):printf("NO\n");
		}
	}
}
