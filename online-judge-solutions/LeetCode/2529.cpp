//https://leetcode.com/problems/maximum-count-of-positive-integer-and-negative-integer/
//Lang		:	C++
//Time		:	37 ms
//Memory	:	17.7 MB
class Solution{
public:
    int maximumCount(vector<int>& v){
		int a=count_if(begin(v),end(v),[](int x){return x<0;});
		int b=count_if(begin(v),end(v),[](int x){return x>0;});
		return max(a,b);
    }
};
