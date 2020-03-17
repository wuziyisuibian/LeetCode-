/*************************************************************************
    > File Name: leetCode_0009.cpp
    > Author: wzy
    > Mail: 1144156906@qq.com 
    > Created Time: 2020年01月06日 星期一 10时00分17秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

//------------一个数字从左边和从右边读是否是一样的
//class Solution {
//public:
//    bool isPalindrome(int x) {
//		string s1 = to_string(x);
//		string s2 = s1;
//		reverse(s2.begin(), s2.end());
//		if(s1.compare(s2) == 0)
//			return true;
//		else
//			return false;
//    }
//
//};

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0|| (x!=0 &&x%10==0)) return false;
        int sum=0;
        while(x>sum)
        {
            sum = sum*10+x%10;
            x = x/10;
        }
        return (x==sum)||(x==sum/10);
    }
};

int main()
{
	Solution s;
	cout << s.isPalindrome(121) << endl;
	return 0;
}



