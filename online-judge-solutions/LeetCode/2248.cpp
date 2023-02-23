//https://leetcode.com/problems/intersection-of-multiple-arrays
//Lang		:	C++
//Time		:	7 ms
//Memory	:	11.7 MB
vector<int> interDos(vector<int> &v1,vector<int> &v2){
	vector<int> r;
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
	set_intersection(begin(v1),end(v1),begin(v2),end(v2),back_inserter(r));
	return r;
}
vector<int> interDos(vector<int> &v1){
    sort(v1.begin(),v1.end());
	return v1;
}
class Solution{
public:
    vector<int> intersection(vector<vector<int>>& n){
		if(n.size()==1) return interDos(n[0]);
		else{
			vector<int> v=interDos(n[0],n[1]);
			for(int i=1;i<n.size();i++) v=interDos(v,n[i]);
			return v;
		}
    }
};
