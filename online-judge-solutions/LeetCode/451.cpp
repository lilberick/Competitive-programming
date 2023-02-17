//https://leetcode.com/problems/sort-characters-by-frequency
//Lang		:	C++
//Time		:	8 ms
//Memory	:	9.3 MB
class Solution{
public:
    string frequencySort(string s){
		unordered_map<char,int> m;
		for(char c:s) m[c]++;
		string t;
		vector<pair<int,string>> v;
		for(auto i=m.begin();i!=m.end();i++){
			string r(i->second,i->first);
			v.push_back(make_pair(r.size(),r));
		}
		sort(rbegin(v),rend(v));
		for(auto i:v) t+=i.second;
		return t;
    }
};
