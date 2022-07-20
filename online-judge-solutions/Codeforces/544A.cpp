//https://codeforces.com/problemset/problem/544/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	140 KB
#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
int main(){
	int k;
	while(cin>>k){
			string s;cin>>s;
			if(k==1){cout<<"YES\n"<<s<<"\n";}
			else{
					set<char> t; t.insert(s.begin(),s.end());
					if(t.size()<k) cout<<"NO\n";
					else{
							vector<string> w;
							string y;
							int c=0,j;
							vector<char> p;
							for(int i=0;i<s.size();i++){
									if((y.size()>0 && y.back()==s[i]) || y=="") y+=s[i];
									else{
											if(find(p.begin(),p.end(),s[i])!=p.end() || (y.find(s[i])<y.size())){
													y+=s[i];
											}else{
													w.push_back(y);
													p.push_back(y[0]);
													y.clear();
													y+=s[i];
											}
									}
									j=i;
									if(w.size()==k-1) break;
							}
							w.push_back(s.substr(j,s.size()-j));
							if(w.size()==k){
									cout<<"YES\n";
									for(string x:w){cout<<x<<"\n";}
							}else{cout<<"NO\n";}
					}
			}
	}
	return 0;
}
