#include <vector>
#include <iostream>

using std::cout;
using std::endl;
using std::vector;

int maxSubArray(vector<int> &nums)
{
    int sum = 0;
    int max = nums[0];
    size_t size = nums.size();
    for (int i=0; i != size; ++i)
    {
        if(sum<=0)
        {
            sum = nums[i];
        }
        else
        {
            sum+=nums[i];
        }
        max = max < sum ? sum : max;
    }
    return max;
}

int main()
{
    vector<int> nums = {-2, 3, 1, 3};
    int n = maxSubArray(nums);
    cout << n << endl;
    return 0;
}