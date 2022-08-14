//https://codeforces.com/problemset/problem/1701/B
//Lang		:	GNU C++14
//Time		:	46 ms
//Memory	:	2400 KB
#include<iostream>
#include<vector>
using namespace std;
int main(){
	int t,n,j;
	cin>>t;
	while(t--){
		cin>>n;
		vector<int> v(n),w;
		for(int i=0;i<n;i++){v[i]=i+1;}
		for(int i=1;i<=n;i++){
			int k=i;
			if(k%2!=0){
				w.push_back(k);
				while(k*2<=n){
					w.push_back(k*2);
					k*=2;
				}
			}
		}
		cout<<2<<endl;
		for(int i=0;i<w.size();i++){cout<<w[i]<<" ";}cout<<endl;
	}
	return 0;
}
