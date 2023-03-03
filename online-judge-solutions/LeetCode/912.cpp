//https://leetcode.com/problems/sort-an-array
//Lang		:	C++
//Time		:	130 ms
//Memory	:	61.3 MB
class Solution{
public:
    vector<int> sortArray(vector<int>& n){
        sort(begin(n),end(n));
        return n;
    }
};
