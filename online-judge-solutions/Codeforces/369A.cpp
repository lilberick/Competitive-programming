//https://codeforces.com/problemset/problem/369/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int n,m,k,a;
	while(cin>>n>>m>>k){
		int n1=0,n2=0;
		while(n--){cin>>a;a==1?n1++:n2++;}
		if(n1>=m){n1-=m;m=0;}
		else{m-=n1;n1=0;}
		n2=(n2<m+k)?0:n2-m-k;
		cout<<n1+n2<<endl;
	}
	return 0;
}
