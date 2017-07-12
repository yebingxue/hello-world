#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
	int singleNumber(vector<int>& nums) {
		vector<int> count(32,0);
		int result = 0;
		for (int i = 0; i<32; i++)
		{
			for (int j = 0; j<nums.size(); j++)
			{
				count[i] += (nums[j]>>i) & 1;
			}
			result |= (count[i] % 3) << i;
		}
		return result;
	}
};

int main()
{
	vector<int> nums;
	nums.push_back(3);
	Solution s;
	cout << s.singleNumber(nums) << endl;;
	return 1;
}