//https://cses.fi/problemset/task/1083
//Lang		:	GNU C++11
//Time		:	0.09 s 
//Memory	:	285 ch.
#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
using namespace std;
int main(){
	int n,a;
	cin>>n;
	vector<int> v(n),w;
	for(int i=0;i<n-1;i++){cin>>a; w.push_back(a);}
	sort(begin(w),end(w));
	iota(begin(v),end(v),1);
	for(int i=0;i<v.size();i++) if(v[i]!=w[i]){cout<<v[i]<<endl;break;}
	return 0;
}
