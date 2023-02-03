//https://leetcode.com/problems/two-out-of-three
//Lang		:	C++
//Time		:	15 ms
//Memory	:	28.6 MB
class Solution{
public:
    vector<int> twoOutOfThree(vector<int>& n1,vector<int>& n2,vector<int>& n3){
		set<int> s1(begin(n1),end(n1)),s2(begin(n2),end(n2)),s3(begin(n3),end(n3));
		map<int,int> m;
		for(int i:s1) m[i]++;
		for(int i:s2) m[i]++;
		for(int i:s3) m[i]++;
		vector<int> v;
		for(auto i=m.begin();i!=m.end();i++){
			if(i->second>1) v.push_back(i->first);
		}
		return v;
    }
};
