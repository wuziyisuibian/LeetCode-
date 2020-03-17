/*************************************************************************
    > File Name: leetCode_0014.cpp
    > Author: wzy
    > Mail: 1144156906@qq.com 
    > Created Time: 2020年01月06日 星期一 15时46分24秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

//求出公共前缀，情况需考虑仔细，
//1.空string
//2.一个string

//class Solution {
//public:
//    string longestCommonPrefix(vector<string>& strs) {
//		string res;
//		
//		if(srts.size()==0){
//			return string("");
//		}
//		if(strs.size()==1){
//			return strs[0];
//		}
//		for(auto it_1=strs.begin(), it_2=strs.begin()+1; it_2!=strs.end(); it_1++, it_2++){
//			if(it_1 == strs.begin()){
//				res = com(*it_1, *it_2);
//			} else {
//				res = com(res, *it_2);
//			}
//			if(res.compare("") == 0)
//				break;
//		}
//		
//		return res;
//    }
//
//	string com(string str1, string str2){
//		size_t length = str1.size()>str2.size() ? str2.size() : str1.size();
//		string res("");
//		for(size_t i=0; i<length; i++){
//			if(str1[i] == str2[i]){
//				res.push_back(str1[i]);
//			} else
//				break;
//		}
//		
//		return res;
//	}
//};
class Solution
{
public:
	string longestCommonPrefix(vector<string>& strs){
		string prefix="";
		if(strs.size() == 0) return prefix;
		
		for(size_t k=0; k<strs[0].size(); k++){
			size_t i=1;
			for(; i<strs.size() && strs[i].size()>k; i++){
				if(strs[0][k] != strs[i][k])
					return prefix;
			}
			if(i=strs.size()) prefix+=strs[0][k];
		}
		
		return prefix;
	}
};

int main()
{
	Solution s;
	vector<string> ss {"flow", "floos", "flossa"};
	cout << s.longestCommonPrefix(ss) << endl;
	return 0;
}
