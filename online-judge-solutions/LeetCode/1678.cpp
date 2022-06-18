//https://leetcode.com/problems/goal-parser-interpretation
//Lang		:	C++
//Time		:	6 ms
//Memory	:	7.7 MB
#include<iostream>
#include<regex>
using namespace std;
class Solution {
	public:
	    string interpret(string command){
		    command=regex_replace(command,regex("\\(\\)"),"o");
		    command=regex_replace(command,regex("\\(al\\)"),"al");
		    return command;
	    }
};
