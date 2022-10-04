//https://codeforces.com/problemset/problem/1638/A
//Lang		:	GNU C++14
//Time		:	62 ms
//Memory	:	0 KB
#include<iostream>
#include<algorithm>
using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
int main(){
	fastInp;
	int t,n;
	for(cin>>t;t--;){
		cin>>n;
		int p[n],np[n],r=-1,l=-1;
		for(int i=1;i<=n;i++){cin>>p[i-1];}
		copy(p,p+n,np);
		sort(np,np+n);
		for(int i=0;i<n;i++){
			if(np[i]!=p[i]){
				l=i;
				for(int j=l;j<n;j++){
					if(p[j]==np[l]){
						r=j;
						break;
					}
				}
				break;
			}
		}
		reverse(p+l,p+r+1);
		for(int i=0;i<n;i++){cout<<p[i]<<" ";}cout<<endl;
	}
	return 0;
}
