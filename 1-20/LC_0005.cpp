/*************************************************************************
  > File Name: LC_0005.cpp
  > Author: wzy
  > Mail: 1144156906@qq.com 
  > Created Time: 2020年01月10日 星期五 17时56分22秒
 ************************************************************************/

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
	string longestPalindrome(string s) {
		for(int i=s.size(); i>0; i--){
			int end=s.size()-i;
			for(int j=0; j<=end; j++){
				string sub=s.substr(j,j+i-1);
				bool whe = isPalind(sub);
				if(bool){
					return sub;
				}
			}
		}
		return "";
	}

	bool isPalind(string s){
		cout << s << endl;
		return 0;
	}
};

//string longestPalindrome(string s) {
//	if (s.empty()) return "";
//	if (s.size() == 1) return s;
//	int min_start = 0, max_len = 1;
//	for (int i = 0; i < s.size();) {
//		if (s.size() - i <= max_len / 2) 
//			break;
//		int j = i, k = i;
//		while (k < s.size()-1 && s[k+1] == s[k]) 
//			++k; // Skip duplicate characters.
//		i = k+1;
//		while (k < s.size()-1 && j > 0 && s[k + 1] == s[j - 1]) { 
//			++k; 
//			--j; 
//		} // Expand.
//		int new_len = k - j + 1;
//		if (new_len > max_len) { 
//			min_start = j; 
//			max_len = new_len; 
//		}
//	}
//	return s.substr(min_start, max_len);
//}

int main()
{
	Solution s;
	string s1;
	s1 = "babad";
	cout << s.longestPalindrome(s1) << endl;
	//s1 = "cbbd";
	//cout << s.longestPalindrome(s1) << endl;

	return 0;
}

