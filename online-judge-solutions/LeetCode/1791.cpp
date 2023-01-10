//https://leetcode.com/problems/find-center-of-star-graph
//Lang		:	C++
//Time		:	309 ms
//Memory	:	83.5 MB
public:
	int findCenter(vector<vector<int>>& v){
		map<int,int> m,n;
		for(int i=0;i<v.size();i++){
			m[v[i][0]]++;
			m[v[i][1]]++;
		}
		for(auto i=m.begin();i!=m.end();i++) n[i->second]=i->first;
		return n.rbegin()->second;
	}
};
