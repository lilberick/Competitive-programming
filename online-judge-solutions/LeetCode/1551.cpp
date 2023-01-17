//https://leetcode.com/problems/minimum-operations-to-make-array-equal/
//Lang		:	C++
//Time		:	13 ms
//Memory	:	11.5 MB
class Solution{
public:
    int minOperations(int n){
		vector<int> v(n);
		for(int i=0;i<n;i++){v[i]=2*i+1;}
		int s=0;
		for(int i=0;i<v.size()/2;i++) s+=(v[n-i-1]-v[i])/2;
		return s;
    }
};
