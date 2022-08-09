//https://codeforces.com/problemset/problem/1716/B
//Lang		:	GNU C++14
//Time		:	170 ms
//Memory	:	0 KB
#include<iostream>
#include<vector>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		cout<<n<<endl;
		vector<int> v(n);
		for(int i=0;i<n;i++){
			v[i]=i+1;
			cout<<v[i]<<" ";
		}cout<<endl;
		for(int i=0;i<n-1;i++){
			swap(v[i],v[n-1]);
			for(int j=0;j<n;j++){
				cout<<v[j]<<" ";
			}cout<<endl;
		}
	}
	return 0;
}
