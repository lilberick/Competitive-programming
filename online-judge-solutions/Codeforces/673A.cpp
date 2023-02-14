//https://codeforces.com/problemset/problem/673/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n;cin>>n;
	vector<int> v(n+1);v[0]=0;
	for(int i=1;i<=n;i++){cin>>v[i];}
	v.push_back(90);
	int s=0;
	bool b=true;
	for(int i=1;i<=n+1 && b;i++){
		s=v[i-1]+15;
		if(v[i]-v[i-1]>15) b=false;
	}
	cout<<(s<90?s:90)<<endl;
	return 0;
}
