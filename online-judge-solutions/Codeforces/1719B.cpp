//https://codeforces.com/problemset/problem/1719/B
//Lang		:	GNU C++14
//Time		:	343 ms
//Memory	:	800 KB
#include<iostream>
#include<vector>
#include<numeric>
using namespace std;
int main(){
	int t,n,k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		vector<int> v(n);
		iota(begin(v),end(v),1);
		if(k%4==0) cout<<"NO\n";
		else{
			cout<<"YES\n";
			if(k%4==1 || k%4==3){
				for(int i=0;i<v.size();i+=2){
					cout<<v[i]<<" "<<v[i+1]<<endl;
				}
			}else{
				for(int i=0;i<v.size();i+=2){
					if(!((i/2)%2)) cout<<v[i+1]<<" "<<v[i]<<endl;
					else cout<<v[i]<<" "<<v[i+1]<<endl;
				}
			}
		}
	}
	return 0;
}
