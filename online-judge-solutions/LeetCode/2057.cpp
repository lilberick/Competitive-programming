//https://leetcode.com/problems/smallest-index-with-equal-value
//Lang		:	C++
//Time		:	11 ms
//Memory	:	21.9 MB
class Solution{
public:
    int smallestEqual(vector<int>& n){
        int r=-1;
        for(int i=0;i<n.size();i++) if(i%10==n[i]){r=i;break;}
        return r;
    }
};
