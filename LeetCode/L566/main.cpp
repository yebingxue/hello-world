#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int rows = nums.size();
        int cols = nums[0].size();
        if(rows*cols != r*c)
            return nums;
        vector<vector<int>> newnums(r,vector<int>(c));
        for(int i=0;i<rows*cols;i++)
        {
            newnums[i/c][i%c] = nums[i/cols][i%cols];
        }
        return newnums;
    }
};

int main()
{
    return 0;
}
