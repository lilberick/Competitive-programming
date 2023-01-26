//https://leetcode.com/problems/find-numbers-with-even-number-of-digits
//Lang		:	C++
//Time		:	20 ms
//Memory	:	9.9 MB
class Solution {
public:
    int findNumbers(vector<int>& v){
        int r=0;
        for(int n:v){
            string s=to_string(n);
            if(s.size()%2==0) r++;
        }
        return r;
    }
};
