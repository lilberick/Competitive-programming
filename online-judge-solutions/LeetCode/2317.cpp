//https://leetcode.com/problems/maximum-xor-after-operations/
//Lang		:	C++
//Time		:	94 ms
//Memory	:	48.1 MB
class Solution{
public:
    int maximumXOR(vector<int>& n){
		int r=0;
		for(int i=0;i<n.size();i++) r|=n[i];
		return r;
    }
};
