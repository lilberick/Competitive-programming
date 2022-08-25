//https://codeforces.com/problemset/problem/1720/B
//Lang		:	GNU C++14
//Time		:	171 ms
//Memory	:	400 KB
#include<iostream>
#include<vector>
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
		int m1=*max_element(begin(v),end(v));
		int mi=max_element(begin(v),end(v))-begin(v);
		v.erase(v.begin()+mi);
		int n1=*min_element(begin(v),end(v));
		int ni=min_element(begin(v),end(v))-begin(v);
		v.erase(v.begin()+ni);
		int m2=*max_element(begin(v),end(v));
		int n2=*min_element(begin(v),end(v));
		cout<<m1+m2-n1-n2<<endl;

	}
	return 0;
}
