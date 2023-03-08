//https://leetcode.com/problems/kth-largest-element-in-an-array
//Lang		:	C++
//Time		:	153 ms
//Memory	:	45.6 MB
class Solution{
public:
    int findKthLargest(vector<int>& n,int k){
		sort(rbegin(n),rend(n));
		return n[k-1];
    }
};
