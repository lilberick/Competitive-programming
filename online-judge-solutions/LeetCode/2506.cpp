//https://leetcode.com/problems/count-pairs-of-similar-strings
//Lang		:	C++
//Time		:	70 ms
//Memory	:	24 MB
class Solution{
public:
    int similarPairs(vector<string>& w){
		map<string,int> m;
        for(string s:w){
            set<char> r(begin(s),end(s));
            string t(begin(r),end(r));
			m[t]++;
        }
		int x=0;
		for(auto i=m.begin();i!=m.end();i++) if(i->second>1) x+=((i->second)*(i->second-1))/2;
		return x;
    }
};
