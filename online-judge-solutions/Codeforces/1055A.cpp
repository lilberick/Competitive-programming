//https://codeforces.com/problemset/problem/1055/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	200 KB
#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n,s,x;
	while(cin>>n>>s){
			vector<int> a,b;
			for(int i=0;i<n;i++){cin>>x;a.push_back(x);}
			for(int i=0;i<n;i++){cin>>x;b.push_back(x);}
			if(a[0]==0) cout<<"NO\n";
			else{
					if(a[s-1]==1) cout<<"YES\n";
					else{
							if(b[s-1]==0) cout<<"NO\n";
							else{
									bool t=false;
									for(int i=s;i<n;i++){
											if(a[i]==b[i] && a[i]==1) t=true;
									}
									cout<<(t ? "YES":"NO")<<"\n";
							}
					}
			}
	}
	return 0;
}
