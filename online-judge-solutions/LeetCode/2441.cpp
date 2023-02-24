//https://leetcode.com/problems/largest-positive-integer-that-exists-with-its-negative
//Lang		:	C++
//Time		:	35 ms
//Memory	:	23.4 MB
class Solution{
public:
    int findMaxK(vector<int>& n){
		map<int,int> m;
		for(int i:n) m[i]++;
		int r=1;
		for(auto i=m.begin();i!=m.end();i++) if(i->second>0 && m[-i->first]>0){r=i->first;break;}
		return -r;
    }
};
