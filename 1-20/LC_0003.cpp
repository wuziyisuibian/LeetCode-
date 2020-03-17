/*************************************************************************
    > File Name: LC_0003.cpp
    > Author: wzy
    > Mail: 1144156906@qq.com 
    > Created Time: 2020年01月07日 星期二 17时52分02秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

//-------------------------here is a bug!!!
//class Solution {
//public:
//    int lengthOfLongestSubstring(string s) {
//	
//		for(int i=s.size(); i>0; --i){
//			for(int j=0; j+i <= s.size(); ++j){
//				string sub_str = s.substr(j,i);
//				int valid = isEnd(sub_str);
//				if(valid) return sub_str.size();
//			}
//		}
//		return 0;
//    }
//
//	int isEnd(string subStr){
//		unordered_map<char,int> s {{'a', 9}};
//		for(int i=0; i<subStr.size(); i++){
//			char c = subStr[i];
//			cout << s[i] << "--si\n";
//			auto it = s.find(c);
//			if (it != s.end()) 
//				it.second. ++;
//			else{
//				s.insert(make_pair(c,1));
//				cout << "insert\n";
//			} 
//		}
//		for(auto it=s.begin(); it!=s.end(); it++){
//			cout << it->first << " " << it->second << endl;
//			if(it->second > 1){
//				return 0;
//			}
//		}
//		return 1;
//	}
//};

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
		unordered_map <char, int> ma;

		int start=-1;
		int maxLen = 0;
		for(int i=0; i<s.size(); i++){
			if(ma.count(s[i]) == 0){
				ma[s[i]] = i;
				//maxLen ++;
			}else{
				start = ma[s[i]]>start ? ma[s[i]] : start;
				ma[s[i]] = i;
			}
			maxLen<(i-start) ? maxLen=i-start : 1 ;
		}
		return maxLen;
    }
};

int main()
{
	Solution s;
	string s1 = "pwwkew";
	cout << s.lengthOfLongestSubstring(s1) << endl;
	s1 = "abcabcbb";
	cout << s.lengthOfLongestSubstring(s1) << endl;
	s1 = "abba";
	cout << s.lengthOfLongestSubstring(s1) << endl;
	return 0;
}
