#pragma once

#include <common.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
	std::map<int, int> map;
	for (int i=0;i<nums.size();i++){
		int complement = target - nums[i];
		if (map.count(complement)) {
			return map[complement],i
		}
		else {
			map[nums[i]] = i;
		}
	}
	return -1, -1;


}