//https://leetcode.com/problems/squares-of-a-sorted-array
//Lang		:	C++
//Time		:	42 ms
//Memory	:	26 MB
class Solution{
public:
    vector<int> sortedSquares(vector<int>& n){
		for(int i=0;i<n.size();i++) n[i]=n[i]*n[i];
		sort(begin(n),end(n));
		return n;
    }
};
