//https://leetcode.com/problems/find-the-middle-index-in-array
//Lang		:	C++
//Time		:	8 ms
//Memory	:	12.4 MB
class Solution{
public:
    int findMiddleIndex(vector<int>& n){
			int l=0,r=accumulate(begin(n),end(n),0)-n[0],x=-1;
			for(int i=0;i<n.size();i++){
				if(l==r){x=i;break;}
				l+=n[i];
				if(i+1<n.size())r-=n[i+1];
			}
			return x;
    }
};
