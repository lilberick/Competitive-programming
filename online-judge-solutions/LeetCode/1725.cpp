//https://leetcode.com/problems/number-of-rectangles-that-can-form-the-largest-square
//Lang		:	C++
//Time		:	47 ms
//Memory	:	20.2 MB
class Solution{
public:
    int countGoodRectangles(vector<vector<int>>& v){
		map<int,int,greater<int>> m;
		for(auto i:v) m[min(i[0],i[1])]++;
		return m.begin()->second;
    }
};
