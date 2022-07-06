//https://codeforces.com/problemset/problem/1144/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	100 KB
#include<iostream>
#include<set>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n--){
		string s;
		cin>>s;
		set<char> a(s.begin(),s.end());
		int n1=s.size(),n2=a.size();
		if(n1!=n2) cout<<"NO\n";
		else{
			int t=1;
			for(int i=1;i<n2 && t==1;i++){
				if(*next(a.begin(),i)-*next(a.begin(),i-1)>1) t=0;
			}
			cout<<(t==0 ? "NO\n":"YES\n");
		}
	}
	return 0;
}
