//https://codeforces.com/problemset/problem/34/A
//Lang		:	GNU C++14
//Time		:	30 ms
//Memory	:	0 KB
#include<iostream>
#include<vector>
using namespace std;
int main(){
	int t,n,a;
	while(cin>>n){
		vector<int> v(n);
		int minimo=1002;
		for(int i=0;i<n;i++){
			cin>>v[i];
			if(i>0) minimo=min(minimo,abs(v[i]-v[i-1]));
		}
		int j,k;
		for(int i=1;i<n;i++){
			if(abs(v[i]-v[i-1])==minimo){
				j=i;k=i+1;
				break;
			}
		}
		if(abs(v[0]-v[n-1])<=minimo){j=1,k=n;}
		cout<<j<<" "<<k<<endl;
	}
	return 0;
}
