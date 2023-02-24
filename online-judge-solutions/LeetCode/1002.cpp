//https://leetcode.com/problems/find-common-characters
//Lang		:	C++
//Time		:	21 ms
//Memory	:	10.4 MB
string  repetidos(string a,string b){
	sort(begin(a),end(a));
	sort(begin(b),end(b));
	vector<char> r;
	set_intersection(begin(a),end(a),begin(b),end(b),back_inserter(r));
	string s(begin(r),end(r));
	return s;
}
class Solution{
public:
    vector<string> commonChars(vector<string>& w){
		string s=w[0];
		for(string i:w) s=repetidos(s,i);
		vector<string> r;
		for(char i:s) r.push_back(string(1,i));
		return r;
    }
};
