//https://leetcode.com/problems/number-of-pairs-of-strings-with-concatenation-equal-to-target
//Lang		:	C++
//Time		:	151 ms
//Memory	:	71.6 MB
class Solution{
public:
    int numOfPairs(vector<string>& n, string t){
		set<pair<int,int>> s;
		for(int i=0;i<n.size();i++){
			for(int j=0;j<n.size();j++){
				if(i!=j && n[i]+n[j]==t) s.insert(make_pair(i,j));
			}
		}
		return s.size();
    }
};
