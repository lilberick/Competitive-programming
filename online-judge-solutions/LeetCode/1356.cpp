//https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits
//Lang		:	C++
//Time		:	7 ms
//Memory	:	10.9 MB
class Solution{
public:
    vector<int> sortByBits(vector<int>& v){
		map<int,vector<int>> m;
		for(int x:v) m[__builtin_popcount(x)].push_back(x);
		vector<int> w;
		for(auto i=m.begin();i!=m.end();i++){
			sort(begin(i->second),end(i->second));
			w.insert(end(w),begin(i->second),end(i->second));
		}
		return w;
    }
};
