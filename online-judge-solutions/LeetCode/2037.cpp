//https://leetcode.com/problems/minimum-number-of-moves-to-seat-everyone
//Lang		:	C++
//Time		:	19 ms
//Memory	:	18.1 MB
#include<vector>
#include<algorithm>
#include<stdlib.h>
class Solution{
	public:
	    int minMovesToSeat(vector<int>& seats, vector<int>& students){
		    sort(seats.begin(),seats.end());
		    sort(students.begin(),students.end());
		    int s=0;
		    for(int i=0;i<seats.size();i++){
			    s+=abs(students[i]-seats[i]);
		    }
		    return s;
	    }
};
