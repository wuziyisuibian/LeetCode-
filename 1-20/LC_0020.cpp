/*************************************************************************
  > File Name: leetCode_0020.cpp
  > Author: wzy
  > Mail: 1144156906@qq.com 
  > Created Time: 2020年01月06日 星期一 17时02分37秒
 ************************************************************************/

#include <iostream>
#include <deque>
#include <unordered_map>
using namespace std;

//符号匹配，考虑[ 和 ]情况
class Solution {
public:
	bool isValid(string s) {
		deque<char> cs;
		for(size_t i=0; i<s.size(); i++){
			if(_brackets[s[i]]){
				cs.push_back(s[i]);
			} else if(_brackets.find(s[i]) != _brackets.end()){
				if(cs.size()!=0 && _brackets[cs[cs.size()-1]] == s[i]){
					cs.pop_back();
				}else{
					return false;
				}
			}else{
				return false;
			}
		}
		if(cs.size()!=0) return false;
		return true;
	}
private:
	static unordered_map<char,char> _brackets;
};

unordered_map<char,char> Solution::_brackets {
	{'[',']'}, {'(',')'},{'{','}'}
};

int main()
{
	Solution s;
	cout << s.isValid("[{}]") << endl;
	return 0;
}
