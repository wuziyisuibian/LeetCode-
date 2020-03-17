/*************************************************************************
    > File Name: leetCode_01.cpp
    > Author: wzy
    > Mail: octop:1144156906@qq.com 
    > Created Time: 2020年01月03日 星期五 13时41分11秒
 ************************************************************************/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

//给出数组nums和target，返回下标，使得nums[i] + nums[j]=target.
//time O(n) space O(n)
//class Solution {
//public:
//    vector<int> twoSum(vector<int>& nums, int target) {
//		vector<int> res;
//
//		for(int i=0; i<nums.size(); i++){
//			for(int j=i+1; j<nums.size(); j++){
//				if ((nums[i] + nums[j]) == target){
//					res.push_back(i);
//					res.push_back(j);
//					return res;
//				}
//				cout << nums[i] << " " << nums[j] << endl;
//			}
//		}
//		return res;
//	}
//};

class Solution{
public:
	vector<int> twoSum(vector<int>& nums, int target){
		unordered_map<int, int> hash;
		vector<int> res;
		for(int i=0; i<nums.size(); i++){
			int number_find = target - nums[i];

			if(hash.find(number_find) != hash.end()){

				res.push_back(hash[number_find]);
				res.push_back(i);
				return res;
			}
			
			hash[nums[i]] = i;
		}
		return res;
	}
};

int main(void)
{
	vector<int> arr;
	Solution s;
	for(int i=0; i<100; i++){
		arr.push_back(i);
	}
	vector<int> res = s.twoSum(arr, 25); 
	cout << "res:" << arr[res[0]] << " " << arr[res[1]] << endl;
	return 0;
}
