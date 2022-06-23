//https://leetcode.com/problems/determine-color-of-a-chessboard-square
//Lang		:	C++
//Time		:	4 ms
//Memory	:	5.9 MB
class Solution {
	public:
	    bool squareIsWhite(string coordinates){
		    return (((coordinates[0]-96) & 1<<0)^(coordinates[1] & 1<<0));
	    }
};
