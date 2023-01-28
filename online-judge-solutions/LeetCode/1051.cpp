//https://leetcode.com/problems/height-checker/
//Lang		:	C++
//Time		:	4 ms
//Memory	:	8.1 MB
class Solution{
public:
    int heightChecker(vector<int>& h){
        vector<int> e(h);
        sort(begin(h),end(h));
        int r=0;
        for(int i=0;i<h.size();i++) if(h[i]!=e[i]) r++;
        return r;
    }
};
