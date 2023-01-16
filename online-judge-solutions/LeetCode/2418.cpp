//https://leetcode.com/problems/sort-the-people/
//Lang		:	C++
//Time		:	30 ms
//Memory	:	23.7 MB
class Solution{
public:
    vector<string> sortPeople(vector<string>& n,vector<int>& h){
		map<int,string,greater<int>> m;
		for(int i=0;i<n.size();i++){m[h[i]]=n[i];}
		vector<string> v;
		transform(m.begin(),m.end(),back_inserter(v),[](const auto& p){return p.second;});
		return v;
    }
};
