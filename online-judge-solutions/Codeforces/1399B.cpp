//Lang		:	GNU C++14
//Time		:	62 ms
//Memory	:	0 KB
#include<iostream>
#include<algorithm>
#include<numeric>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		long long a[n],b[n];
		for(int i=0;i<n;i++){cin>>a[i];}
		for(int i=0;i<n;i++){cin>>b[i];}
		int amin=*min_element(a,a+n);
		int bmin=*min_element(b,b+n);
		for(int i=0;i<n;i++){
			a[i]-=amin;
			b[i]-=bmin;
			a[i]>=b[i]?b[i]=0:a[i]=0;
		}
		long long suma=0,sumb=0;
		suma=accumulate(a,a+n,suma);
		sumb=accumulate(b,b+n,sumb);
		cout<<suma+sumb<<endl;
	}
	return 0;
}
