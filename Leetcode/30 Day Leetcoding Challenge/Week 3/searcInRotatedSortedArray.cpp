// Author: Aryan Yadav

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        if (nums.size() == 0)
            return -1;
        map<int, int> m;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            m[nums[i]] = i;
        }
        if (m[target] == 0)
        {
            if (nums[0] == target)
                return 0;
            return -1;
        }
        return m[target];
    }
};