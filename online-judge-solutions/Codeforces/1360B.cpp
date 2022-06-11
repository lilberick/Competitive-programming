//https://codeforces.com/problemset/problem/1360/B
//Lang		:	GNU C++14
//Time		:	46 ms
//Memory	:	100 KB
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int t,x,n;
	cin>>t;
	while(t--){
		cin>>n;
		vector<int> s;
		while(n--){
			cin>>x; s.push_back(x);
		}
		sort(s.begin(),s.end());
		int minimo=1001;
		for(int i=1;i<s.size();i++){
			minimo=min(minimo,s[i]-s[i-1]);
		}
		cout<<minimo<<endl;
	}
	return 0;
}
