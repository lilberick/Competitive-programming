//https://leetcode.com/problems/find-the-winner-of-the-circular-game
//Lang		:	C++
//Time		:	15 ms
//Memory	:	7 MB
class Solution{
public:
    int findTheWinner(int n,int k){
		list<int> v(n);
		iota(begin(v),end(v),1);
		list<int>::iterator actual=v.begin();
		while(v.size()>1){
			for(int i=1;i<k;i++){
				actual++;
				if(actual==v.end()) actual=v.begin();
			}
			actual=v.erase(actual);
			if(actual==v.end()) actual=v.begin();
		}
        return *v.begin();
    }
};
