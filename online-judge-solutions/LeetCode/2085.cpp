//https://leetcode.com/problems/count-common-words-with-one-occurrence
//Lang		:	C++
//Time		:	131 ms
//Memory	:	14.6 MB
class Solution{
public:
    int countWords(vector<string>& w1,vector<string>& w2){
        int r=0;
        for(string s:w1) if(count(begin(w1),end(w1),s)==1 && count(begin(w2),end(w2),s)==1) r++;
        return r;
    }
};
