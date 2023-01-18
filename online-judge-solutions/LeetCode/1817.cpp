//https://leetcode.com/problems/finding-the-users-active-minutes/
//Lang		:	C++
//Time		:	247 ms
//Memory	:	80.7 MB
class Solution{
public:
	vector<int> findingUsersActiveMinutes(vector<vector<int>>& v,int k){
		map<int,set<int>> m;
		for(int i=0;i<v.size();i++) m[v[i][0]].insert(v[i][1]);
		vector<int> w(k,0);
		for(auto& i:m) w[size(i.second)-1]++;
		return w;
    }
};
