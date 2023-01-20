//https://leetcode.com/problems/count-number-of-distinct-integers-after-reverse-operations/
//Lang		:	C++
//Time		:	682 ms
//Memory	:	114.9 MB
class Solution{
public:
    int countDistinctIntegers(vector<int>& v){
		int n=v.size();
		for(int i=0;i<n;i++){
			string s=to_string(v[i]);
			reverse(begin(s),end(s));
			int a=stoi(s);
			v.push_back(a);
		}
		set<int> s(begin(v),end(v));
		return s.size();
    }
};
