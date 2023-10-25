// Rotate Array using Reversal Method [T.S: 00:38:00]
class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        k = k % nums.size(); // k ki size array ki size se badi nahi honi chahiye
        // The line k = k % nums.size(); is used to ensure that k is within a valid range when performing the rotation of the array. It's an important step to handle cases where the value of k might be larger than the size of the array.

        
        // 1. Reverse kardo [0, n-1]

        reverse(nums.begin(), nums.end());

        // 2. Reverse kardo [0, k-1]
        reverse(nums.begin(), nums.begin() + k);

        // 3. Reverse hardo [k, n-1];
        reverse(nums.begin() + k, nums.end());
    }
};