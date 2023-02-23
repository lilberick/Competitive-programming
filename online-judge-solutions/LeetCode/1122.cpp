//https://leetcode.com/problems/relative-sort-array
//Lang		:	C++
//Time		:	3 ms
//Memory	:	8 MB
class Solution{
public:
    vector<int> relativeSortArray(vector<int>& a1,vector<int>& a2){
		vector<int> v;
		map<int,int> m;
		for(int i:a1) m[i]++;
		for(int i:a2){
			vector<int> w(m[i],i);
			v.insert(end(v),begin(w),end(w));
			a1.erase(remove(begin(a1),end(a1),i),end(a1));
		}
		sort(begin(a1),end(a1));
		v.insert(end(v),begin(a1),end(a1));
		return v;
    }
};
