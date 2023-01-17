//https://leetcode.com/problems/queries-on-a-permutation-with-key/
//Lang		:	C++
//Time		:	26 ms
//Memory	:	8.5 MB
class Solution{
public:
    vector<int> processQueries(vector<int>& q, int m){
		vector<int> w;
		deque<int> v(m);
		iota(begin(v),end(v),1);
		for(int x:q){
			int i=find(begin(v),end(v),x)-begin(v);
			int r=v[i];
			v.erase(begin(v)+i);
			v.push_front(r);
			w.push_back(i);
		}
		return w;
    }
};
