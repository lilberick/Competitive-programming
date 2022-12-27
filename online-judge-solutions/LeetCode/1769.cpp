//https://leetcode.com/problems/minimum-number-of-operations-to-move-all-balls-to-each-box/
//Lang		:	C++
//Time		:	251 ms
//Memory	:	9.4 MB
class Solution {
	public:
		vector<int> minOperations(string s){
			vector<int> v;
			for(int i=0;i<s.size();i++){
				int r=0;
				for(int j=0;j<s.size();j++){
					if(s[j]=='1') r+=abs(i-j);
				}
			v.push_back(r);
			}
			return v;
		}
};
