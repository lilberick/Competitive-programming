//https://leetcode.com/problems/jewels-and-stones
//Lang		:	GNU C++14
//Time		:	3 ms
//Memory	:	6.2 MB
#include<iostream>
#include<algorithm>
using namespace std;
class Solution {
	public:
	    int numJewelsInStones(string jewels, string stones){
		    int sum=0;
		    for(char x:stones){
			    sum+=count(jewels.begin(),jewels.end(),x);
		    }
		    return sum;
	    }
};
