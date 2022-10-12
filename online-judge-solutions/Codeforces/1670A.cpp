//https://codeforces.com/problemset/problem/1670/A
//Lang		:	GNU C++14
//Time		:	31 ms
//Memory	:	800 KB
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
int main(){
	fastInp;
	int t,n;
	for(cin>>t;t--;){
		cin>>n;
		vector<int>v(n),w;
		int z=0;
		for(int i=0;i<n;i++){
			cin>>v[i];
			if(v[i]<0) z++;
		}
		for(int i=0;i<n;i++){
			v[i]=(i<z?-abs(v[i]):abs(v[i]));
		}
		w=v;
		sort(begin(w),end(w));
		cout<<(v==w?"YES":"NO")<<"\n";
	}
	return 0;
}
