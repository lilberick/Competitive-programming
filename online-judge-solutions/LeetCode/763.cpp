//https://leetcode.com/problems/partition-labels
//Lang		:	C++
//Time		:	7 ms
//Memory	:	6.9 MB
class Solution{
public:
    vector<int> partitionLabels(string s){
		map<char,int> m;
		for(int i=0;i<s.size();i++) m[s[i]]=i;
		int fin=0,inicio=0;
		vector<int> v;
		for(int i=0;i<s.size();i++){
			fin=max(fin,m[s[i]]);
			if(i==fin){
				v.push_back(fin-inicio+1);
				inicio=i+1;
			}
		}
		return v;
    }
};
