//https://codeforces.com/problemset/problem/621/A
//Lang		:	GNU C++14
//Time		:	187 ms
//Memory	:	1600 KB
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	vector<long long> v;
	long long n,sp=0,x;cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		if(x%2==0) sp+=x;
		else v.push_back(x);
	}
	sort(rbegin(v),rend(v));
	for(int i=0;i<(v.size()/2)*2;i++) sp+=v[i];
	cout<<sp<<endl;
	return 0;
}
