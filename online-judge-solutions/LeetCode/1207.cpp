//https://leetcode.com/problems/unique-number-of-occurrences
//Lang		:	C++
//Time		:	4 ms
//Memory	:	8.4 MB
class Solution{
public:
    bool uniqueOccurrences(vector<int>& v){
		map<int,int> m;
		vector<int> w;
		for(int i:v) m[i]++;
		for(auto i=m.begin();i!=m.end();i++) w.push_back(i->second);
		int n=w.size();
		sort(begin(w),end(w));
		w.erase(unique(begin(w),end(w)),end(w));
		return w.size()==n?true:false;
    }
};
