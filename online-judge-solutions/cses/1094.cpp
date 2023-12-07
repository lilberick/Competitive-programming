//https://cses.fi/problemset/task/1094
//Lang		:	GNU C++11
//Time		:	0.09 s
//Memory	:	246 ch.
#include<iostream>
#include<deque>
using namespace std;
int main(){
	long long n,s=0;cin>>n;
	deque<long long> v(n);
	for(long long i=0;i<n;i++){cin>>v[i];}
	for(long long i=1;i<n;i++){
		if(v[i]<v[i-1]){
			s+=abs(v[i]-v[i-1]);
			v[i]=max(v[i],v[i-1]);
		}
	}
	cout<<s<<endl;
	return 0;
}
