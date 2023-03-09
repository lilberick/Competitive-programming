//https://leetcode.com/problems/minimum-flips-to-make-a-or-b-equal-to-c
//Lang		:	C++
//Time		:	0 ms
//Memory	:	6.1 MB
class Solution{
public:
    int minFlips(int a,int b,int c){
		string sa=bitset<32>(a).to_string();
		string sb=bitset<32>(b).to_string();
		string sc=bitset<32>(c).to_string();
		int na=(int)log2(a),nb=(int)log2(b),nc=(int)log2(c);
		int r=max(max(na,nb),max(nb,nc));
		sa=sa.substr(31-r,32),sb=sb.substr(31-r,32),sc=sc.substr(31-r,32);
		int s=0;
		for(int i=0;i<=r;i++){
			if(sc[i]=='0'){
				if(sa[i]=='1') s++;
				if(sb[i]=='1') s++;
			}else if(sa[i]=='0' && sb[i]=='0') s++;
		}
		return s;
    }
};
