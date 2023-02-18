//https://leetcode.com/problems/find-the-array-concatenation-value
//Lang		:	C++
//Time		:	16 ms
//Memory	:	9.4 MB
class Solution{
public:
    long long findTheArrayConcVal(vector<int>& n){
		deque<int> d(begin(n),end(n));
		long long s=0;
		for(int i=0;i<(n.size()+1)/2;i++){
			int r;
			if(d.size()==1) r=d[0];
			else r=stoi(to_string(d[0])+to_string(d.back()));
			s+=r;
			d.pop_back();d.pop_front();
		}
		return s;
    }
};
