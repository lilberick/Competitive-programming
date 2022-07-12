//https://codeforces.com/problemset/problem/1703/C
//Lang		:	GNU C++14
//Time		:	30 ms
//Memory	:	144 KB
#include<iostream>
#include<vector>
using namespace std;
int main(){
	int t,n,x,n2,b;
	cin>>t;
	while(t--){
		vector<int> a;
		cin>>n;
		n2=n;
		while(n--){cin>>x;a.push_back(x+10);}
		for(int i=0;i<n2;i++){
			cin>>b;
			while(b--){
				char c;
				cin>>c;
				(c=='D') ? a[i]+=1:a[i]-=1;
			}
		}
		for(int x:a){cout<<x%10<<" ";}cout<<endl;
	}
	return 0;
}
