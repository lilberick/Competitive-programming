//https://codeforces.com/problemset/problem/1660/B
//Lang		:	GNU C++14
//Time		:	62 ms
//Memory	:	800 KB
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
int main(){
	fastInp;
	int t,n,x;
	cin>>t;
	while(t--){
		cin>>n;
		vector<int> a(n);
		for(int i=0;i<n;i++){cin>>a[i];}
		sort(begin(a),end(a));
		if(n==1){
			cout<<(a[0]==1?"YES":"NO")<<endl;
		}else{
			cout<<(((a[n-1]-a[n-2])<=1)?"YES":"NO")<<"\n";
		}
	}
	return 0;
}
