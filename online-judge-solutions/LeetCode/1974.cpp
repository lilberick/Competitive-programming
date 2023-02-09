//https://leetcode.com/problems/minimum-time-to-type-word-using-special-typewriter/
//Lang		:	C++
//Time		:	4 ms
//Memory	:	6.2 MB
int distancia(char a,char b){
	if(a>b) swap(a,b);
	return min(b-a,a+26-b);
}
class Solution{
public:
    int minTimeToType(string w){
		char cur='a';
		int s=0;
		for(char c:w){
			s+=distancia(c,cur);
			s++;
			cur=c;
		}
		return s;
    }
};
