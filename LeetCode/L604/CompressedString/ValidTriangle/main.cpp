#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
	int triangleNumber(vector<int>& nums) {
		int total = nums.size();
		int triNum = 0;
		sort(nums.begin(), nums.end());
		reverse(nums.begin(), nums.end());
		for(int i = 0;i < total-2; i++)
			for (int j = i + 1,k = total - 1; k > j; j++)
			{
				while (nums[i] >= nums[j] + nums[k])
					k--;
				triNum += k - j;
			}
		return triNum;
	}
};

