//https://leetcode.com/problems/group-anagrams
//Lang		:	C++
//Time		:	43 ms
//Memory	:	23.2 MB
class Solution{
public:
    vector<vector<string>> groupAnagrams(vector<string>& x){
		vector<pair<string,string>> v;
		map<string,vector<string>> n;
		for(string s:x){
			string t=s;
			sort(begin(t),end(t));
			v.push_back(make_pair(s,t));
		}
		for(auto i:v) n[i.second].push_back(i.first);
		vector<vector<string>> w;
		for(auto i=n.begin();i!=n.end();i++) w.push_back(i->second);
        return w;
    }
};
