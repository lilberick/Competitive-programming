//https://codeforces.com/problemset/problem/567/A
//Lang		:	GNU C++14
//Time		:	468 ms
//Memory	:	3600 KB
#include<iostream>
#include<deque>
using namespace std;
int main(){
	int n;cin>>n;
	deque<long long> v(n),mi,ma,w;
	for(int i=0;i<n;i++) cin>>v[i];
	w=v;w.push_front(3e9);w.push_back(3e9);
	for(int i=1;i<n+1;i++) mi.push_back(min(abs(w[i]-w[i-1]),abs(w[i+1]-w[i])));
	for(int i=0;i<v.size();i++) ma.push_back(max(abs(v[i]-v[0]),abs(v[i]-v[n-1])));
	for(int i=0;i<n;i++) cout<<mi[i]<<" "<<ma[i]<<endl;
	return 0;
}
