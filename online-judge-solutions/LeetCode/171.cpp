//https://leetcode.com/problems/excel-sheet-column-number
//Lang		:	C++
//Time		:	3 ms
//Memory	:	6.2 MB
#include<iostream>
#include<math.h>
using namespace std;
class Solution{
	public:
	    int titleToNumber(string columnTitle){
		    int n=columnTitle.size(),sum=0;
		    for(int i=0;i<n;i++){
			    sum+=(columnTitle[i]-64)*pow(26,n-1-i);
		    }
		    return sum;
	    }
};
