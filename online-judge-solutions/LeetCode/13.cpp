//https://leetcode.com/problems/roman-to-integer
//Lang		:	C++
//Time		:	35 ms
//Memory	:	8.3 MB
#include<iostream>
#include<map>
using namespace std;
class Solution {
	public:
	    int romanToInt(string s){
		map<char,int> m;
		m['M']=1000;
		m['D']=500;
		m['C']=100;
		m['L']=50;
		m['X']=10;
		m['V']=5;
		m['I']=1;
		int a=0,num=0;
		for(char x:s){
			num+=m[x];
			if(m[x]>a) num-=2*a;
			a=m[x];
		}
		return num;
	    }
};
