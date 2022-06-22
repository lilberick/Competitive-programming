//https://leetcode.com/problems/decrypt-string-from-alphabet-to-integer-mapping
//Lang		:	C++
//Time		:	13 ms
//Memory	:	7 MB
#include<map>
#include<vector>
#include<algorithm>
class Solution {
	public:
	    string freqAlphabets(string s){
		map<string,char> m;
		m["10#"]='j';m["1"]='a';
		m["11#"]='k';m["2"]='b';
		m["12#"]='l';m["3"]='c';
		m["13#"]='m';m["4"]='d';
		m["14#"]='n';m["5"]='e';
		m["15#"]='o';m["6"]='f';
		m["16#"]='p';m["7"]='g';
		m["17#"]='q';m["8"]='h';
		m["18#"]='r';m["9"]='i';
		m["19#"]='s';
		m["20#"]='t';
		m["21#"]='u';
		m["22#"]='v';
		m["23#"]='w';
		m["24#"]='x';
		m["25#"]='y';
		m["26#"]='z';
		reverse(s.begin(),s.end());
		vector<string> v;
		while(s.size()){
			string r;
			if(s[0]=='#'){
				r=string(1,'#')+s[1]+s[2];
				v.push_back(r);
				s.erase(0,3);
			}else{
				v.push_back(string(1,s[0]));
				s.erase(0,1);
			}
		}
		for(int i=0;i<v.size();i++){
		    reverse(v[i].begin(),v[i].end());
		}
		string o;
		for(int i=v.size()-1;i>=0;i--){
		    o+=m[v[i]];
		}
		return o;
	    }
};
