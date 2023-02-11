//https://leetcode.com/problems/intersection-of-two-arrays
//Lang		:	C++
//Time		:	8 ms
//Memory	:	10.1 MB
class Solution{
public:
    vector<int> intersection(vector<int>& n1, vector<int>& n2){
        set<int> s;
        for(int i:n1) if(find(begin(n2),end(n2),i)!=end(n2)) s.insert(i);
        vector<int> v(begin(s),end(s));
        return v;
    }
};
