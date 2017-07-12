#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
	bool canPlaceFlowers(vector<int>& flowerbed, int n) {
		int result = 0;
		for (int i = 0; i < flowerbed.size(); i++)
		{
			if (i == 0 && flowerbed[i + 1] == 0)
			{
				result++;
				flowerbed[0] = 1;
			}
			else if (i == flowerbed.size() - 1 && flowerbed[i - 1] == 0)
			{
				result++;
				flowerbed[flowerbed.size() - 1] = 1;
			}
			else
			{
				if (flowerbed[i + 1] == 0 && flowerbed[i - 1] == 0)
				{
					flowerbed[i] = 1;
					result++;
				}
			}
		}
		return result >= n;
	}
};