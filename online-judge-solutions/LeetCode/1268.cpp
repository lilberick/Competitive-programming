//https://leetcode.com/problems/search-suggestions-system
//Lang		:	C++
//Time		:	636 ms
//Memory	:	199 MB
class Solution{
public:
    vector<vector<string>> suggestedProducts(vector<string>& p,string s){
		vector<vector<string>> v;
		sort(begin(p),end(p));
		for(int i=1;i<=s.size();i++){
			string t=s.substr(0,i);
			vector<string> w;
			for(string j:p) if(j.find(t)==0 && w.size()<3) w.push_back(j);
			v.push_back(w);
		}
		return v;
    }
};
