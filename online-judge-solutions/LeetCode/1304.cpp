//https://leetcode.com/problems/find-n-unique-integers-sum-up-to-zero
//Lang		:	C++
//Time		:	0 ms
//Memory	:	6.7 MB
class Solution{
public:
    vector<int> sumZero(int n){
		vector<int> v(n);
		iota(begin(v),end(v),-n/2);
		if(n%2==0) replace(begin(v),end(v),0,n/2);
		return v;
    }
};
