/*************************************************************************
    > File Name: leetCode_0013.cpp
    > Author: wzy
    > Mail: 1144156906@qq.com 
    > Created Time: 2020年01月06日 星期一 11时20分38秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;


class Solution {
public:
    int romanToInt(string s); 
private:
	static unordered_map<char,int> roman; 
};

unordered_map<char,int> Solution::roman {
	{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000} 
};

int Solution::romanToInt(string s) {
	int res = 0;		
	for(auto it=s.begin(); it!=s.end(); it++){
		char c1 = *it;
		char c2 = *(it+1);
		if(c2 && roman[c2] > roman[c1]){
			res = res - roman[c1];
		}
		else{
			res = res + roman[c1];
		}
	}
	return res;
}


int main()
{
	Solution s;
	cout << s.romanToInt("IV") << endl;
	return 0;
}

