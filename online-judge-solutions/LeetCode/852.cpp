//https://leetcode.com/problems/peak-index-in-a-mountain-array
//Lang		:	C++
//Time		:	123 ms
//Memory	:	59.7 MB
class Solution{
public:
    int peakIndexInMountainArray(vector<int>& a){
		int m=*max_element(begin(a),end(a));
		int i=max_element(begin(a),end(a))-begin(a);
		return i;
    }
};
