//https://leetcode.com/problems/design-an-ordered-stream/
//Lang		:	C++
//Time		:	163 ms
//Memory	:	87.2 MB
class OrderedStream{
	private:
		map<int,string> m;
		int ptr;
	public:
		OrderedStream(int n){
			for(int i=1;i<=n+2;i++) m[i]="messi";
			ptr=1;
		}
		vector<string> insert(int idKey, string value){
			m[idKey]=value;
			vector<string> v;
			if(ptr!=idKey) return {};
			for(int i=idKey;i<m.size();i++){
				if(m[i]=="messi"){
					ptr=i;
					vector<string> w;
					for(int j=idKey;j<m.size() && m[j]!="messi";j++) w.push_back(m[j]);
					return w;
				}
			}
			return {};
		}
};
