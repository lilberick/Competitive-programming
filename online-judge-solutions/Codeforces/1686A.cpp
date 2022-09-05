//https://codeforces.com/problemset/problem/1686/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
#include<vector>
using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
int main(){
	fastInp;
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		vector<int> v(n);
		int s=0;
		for(int i=0;i<n;i++){cin>>v[i];s+=v[i];}
		bool b=false;
		for(int i=0;i<n;i++){
			if(v[i]==s/(n*1.0)){b=true;break;}
		}
		cout<<(b?"YES":"NO")<<"\n";
	}
	return 0;
}
