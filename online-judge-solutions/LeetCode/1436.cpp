//https://leetcode.com/problems/destination-city
//Lang		:	C++
//Time		:	15 ms
//Memory	:	10.8 MB
#include<vector>
#include<map>
#define typeof(x) __typeof__(x)
#define tr(c,i) for(typeof(c.begin()) i=c.begin(); i!=c.end(); i++)
class Solution {
	public:
	    string destCity(vector<vector<string>>& v){
		map<string,string>m;
		for(int i=0;i<v.size();i++){
			m[v[i][0]]=v[i][1];
		}
		string destino;
		tr(m,i){
			if(!(m.find(i->second)!=m.end())){
				destino=i->second;
			}
		}
		return destino;
	    }
};
