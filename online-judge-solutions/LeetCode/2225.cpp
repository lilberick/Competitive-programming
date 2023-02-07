//https://leetcode.com/problems/find-players-with-zero-or-one-losses
//Lang		:	C++
//Time		:	1108 ms
//Memory	:	212.9 MB
class Solution{
public:
    vector<vector<int>> findWinners(vector<vector<int>>& v){
		set<int> s;
		map<int,int> m;
		for(auto i:v){
			s.insert(i[0]);
			s.insert(i[1]);
			m[i[1]]++;
		}
		vector<int> a,b;
		vector<vector<int>> c;
		for(int i:s){
			if(m[i]==0) a.push_back(i);
			else if(m[i]==1) b.push_back(i);
		}
		c.push_back(a);
		c.push_back(b);
		return c;
    }
};
