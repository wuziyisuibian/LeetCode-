/*************************************************************************
    > File Name: leetCode_0007.cpp
    > Author: wzy
    > Mail: octop:1144156906@qq.com 
    > Created Time: 2020年01月03日 星期五 16时41分30秒
 ************************************************************************/

#include <limits.h>
#include <math.h>

#include<iostream>
using namespace std;


//整型翻转，翻转过程中可能会溢出

class Solution {
public:
    int reverse(int x) {

//		if(x > INT_MAX || x < INT_MIN)
//			return -1;
		int res = 0;
		int pos_neg = x/fabs(x);
		x=fabs(x);
		
		while(x>0){
			int remain = x % 10;
			if((INT_MAX - remain)/10 < res)
				return 0;
			res = res*10 + remain;
			x = x/10;
		}
		
		return res*pos_neg;
    }
};

int main()
{
	Solution s;
	cout << s.reverse(123) << endl;
	cout << s.reverse(-123) << endl;
	cout << s.reverse(1534236469) << endl;
	cout << typeid(INT_MAX).name() << endl;
	return 0;
}
