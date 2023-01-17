//https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/
//Lang		:	C++
//Time		:	0 ms
//Memory	:	10 MB
class Solution{
public:
    int maxProduct(vector<int>& v){
		sort(begin(v),end(v));
		int n=v.size();
		return (v[n-2]-1)*(v[n-1]-1);
    }
};
