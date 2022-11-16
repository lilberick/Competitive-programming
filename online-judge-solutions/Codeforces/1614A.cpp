//https://codeforces.com/problemset/problem/1614/A
//Lang		:	GNU C++14
//Time		:	31 ms
//Memory	:	0 KB
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int t,n,l,r,k;
	for(cin>>t;t--;){
		cin>>n>>l>>r>>k;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		if(l>k) cout<<0<<endl;
		else{
			long long s=0,c=0;
			for(int i=0;i<n;i++){
				if((a[i]>=l && a[i]<=r) && s+a[i]<=k){
					s+=a[i];
					c++;
				}
			}
			cout<<c<<endl;
		}
	}
	return 0;
}
