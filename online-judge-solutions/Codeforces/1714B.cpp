//https://codeforces.com/problemset/problem/1714/B
//Lang		:	GNU C++14
//Time		:	312 ms
//Memory	:	7200 KB
#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		vector<int> v(n);
		for(int i=0;i<n;i++){
			cin>>v[i];
		}
		bool b=true;
		set<int> s;
		for(int i=n-1;i>=0;i--){
			if(s.count(v[i])){
				cout<<i+1<<endl;
				b=false;
				break;
			}
			s.insert(v[i]);
		}
		if(b) cout<<0<<endl;
	}
	return 0;
}
