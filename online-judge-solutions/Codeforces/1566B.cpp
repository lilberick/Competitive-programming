//https://codeforces.com/problemset/problem/1566/B
//Lang		:	GNU C++14
//Time		:	62 ms
//Memory	:	1300 KB
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int CeroCon(string s){
	vector<int> v;
	int n0=count(s.begin(),s.end(),'0');
	int consecutivo=1;
	if(n0==0){consecutivo=0;}
	else{
		for(int i=0;i<s.size();i++){
			if(s[i]=='0'){v.push_back(i);}
		}
		if(s.size()==1){
			if(s=="1"){consecutivo=0;}
		}else{
			for(int i=1;i<v.size();i++){
				if((v[i]-v[i-1])>1){consecutivo=0;}
			}
		}
	}
	return consecutivo;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s,s2;
		int r;
		cin>>s;
		int n1=count(s.begin(),s.end(),'1');
		int n0=count(s.begin(),s.end(),'0');
		if(n0==0){r=0;}
		else if(n1==0){r=1;}
		else{
			if(CeroCon(s)){r=1;}
			else{r=2;}
		}
		cout<<r<<endl;
	}
	return 0;
}
