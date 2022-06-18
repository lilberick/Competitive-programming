//https://leetcode.com/problems/final-value-of-variable-after-performing-operations
//Lang		:	C++
//Time		:	13 ms
//Memory	:	14 MB
#include<iostream>
using namespace std;
class Solution {
	public:
	    int finalValueAfterOperations(vector<string>& operations) {
		    int x=0;
		    for(string o:operations){
			(o=="++X" || o=="X++") ? x++:x--;
		    }
		    return x;
	    }
};
