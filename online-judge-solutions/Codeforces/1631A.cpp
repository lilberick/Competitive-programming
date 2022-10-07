//https://codeforces.com/problemset/problem/1631/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
#include<algorithm>
using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
int main(){
	fastInp;
	int t,n;
	for(cin>>t;t--;){
		cin>>n;
		int a[n],b[n],a2[n],b2[n];
		for(auto &i:a){cin>>i;}
		for(auto &i:b){cin>>i;}
		for(int i=0;i<n;i++){
			a2[i]=max(a[i],b[i]);
			b2[i]=min(a[i],b[i]);
		}
		cout<<(*max_element(a2,a2+n))*(*max_element(b2,b2+n))<<endl;
	}
	return 0;
}
