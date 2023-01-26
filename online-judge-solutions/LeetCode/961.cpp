//https://leetcode.com/problems/n-repeated-element-in-size-2n-array
//Lang		:	C++
//Time		:	84 ms
//Memory	:	31.4 MB
class Solution{
public:
    int repeatedNTimes(vector<int>& n){
        map<int,int> m;
        for(int i:n) m[i]++;
        int r;
        for(auto i=m.begin();i!=m.end();i++) if(i->second>1){r=i->first;break;}
        return r;
    }
};
