//https://codeforces.com/problemset/problem/1712/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int t,n,k,p;
	for(cin>>t;t--;){
		cin>>n>>k;
		int s=0;
		for(int i=1;i<=n;i++){
			cin>>p;
			if(i<=k && p>k) s++;
		}
		cout<<s<<endl;
	}
	return 0;
}
