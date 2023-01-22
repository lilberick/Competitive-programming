//https://codeforces.com/problemset/problem/609/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	int n,m,r=0;cin>>n>>m;
	vector<int> a(n),s(n);
	for(int i=0;i<n;i++) cin>>a[i];
	sort(rbegin(a),rend(a));
	s[0]=a[0];
	for(int i=1;i<n;i++) s[i]=s[i-1]+a[i];
	for(int i=0;i<n;i++) if(s[i]>=m){r=i;break;}
	cout<<r+1<<endl;
	return 0;
}
