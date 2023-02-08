//https://leetcode.com/problems/largest-combination-with-bitwise-and-greater-than-zero
//Lang		:	C++
//Time		:	502 ms
//Memory	:	88.7 MB
class Solution{
public:
    int largestCombination(vector<int>& v){
		map<int,int> m;
		for(int i:v){
			string s=bitset<30>(i).to_string();
			for(int i=0;i<30;i++) if(s[i]=='1') m[i]++;
		}
		int r=0;
		for(auto i=m.begin();i!=m.end();i++) r=max(r,i->second);
		return r;
    }
};
