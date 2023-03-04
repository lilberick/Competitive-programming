//https://codeforces.com/problemset/problem/768/A
//Lang		:	GNU C++14
//Time		:	62 ms
//Memory	:	3700 KB
#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
int main(){
	fastInp;
	int n,x,y;cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++) cin>>v[i];
	set<int> s(begin(v),end(v));
	if(s.size()==1) cout<<0<<endl;
	else{
		sort(begin(v),end(v));
		for(int i=0;i<n;i++) if(v[i]>v[0]){x=i;break;}
		for(int i=n-1;i>=0;i--) if(v[i]>v[i-1]){y=i;break;}
		cout<<y-x<<endl;
	}
	return 0;
}
