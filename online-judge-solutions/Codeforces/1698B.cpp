//https://codeforces.com/problemset/problem/1698/B
//Lang		:	GNU C++14
//Time		:	343 ms
//Memory	:	800 KB
#include<iostream>
#include<vector>
using namespace std;
int main(){
	int t,n,k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		vector<int> v(n);
		for(int i=0;i<n;i++){cin>>v[i];}
		if(k==1) cout<<(n-1)/2<<endl;
		else{
			int r=0;
			for(int i=1;i<n-1;i++){
				r+=v[i]>v[i-1]+v[i+1];
			}
			cout<<r<<endl;
		}
	}
	return 0;
}
