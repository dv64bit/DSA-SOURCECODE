
// 48. Rotate Image
// class Solution
// {
// public:
//     void rotate(vector<vector<int>> &matrix)
//     {
//         int n = matrix.size();

//         for (int i = 0; i < n; i++)
//         {
//             for (int j = i; j < matrix[i].size(); j++)
//             {
//                 swap(matrix[i][j], matrix[j][i]);
//             }
//         }

//         for (int i = 0; i < n; i++)
//         {
//             reverse(matrix[i].begin(), matrix[i].end());
//         }
//     }
// };

// 2643. Row With Maximum Ones
// class Solution
// {
// public:
//     vector<int> rowAndMaximumOnes(vector<vector<int>> &mat)
//     {
//         vector<int> ans;
//         int oneCout = INT_MIN;
//         int rowNo = -1;
//         int rowSize = mat.size();

//         for (int i = 0; i < rowSize; i++)
//         {
//             int cout = 0;
//             int colSize = mat[i].size();
//             for (int j = 0; j < colSize; j++)
//             {
//                 if (mat[i][j] == 1)
//                 {
//                     cout++;
//                 }
//             }
//             if (cout > oneCout)
//             {
//                 oneCout = cout;
//                 rowNo = i;
//             }
//         }
//         ans.push_back(rowNo);
//         ans.push_back(oneCout);
//         return ans;
//     }
// };

// prob 268. Missing number (using XOR)
// class Solution
// {
// public:
//     int missingNumber(vector<int> &nums)
//     {
//         int missing = 0;

//         for (int i = 0; i < nums.size(); i++)
//         {
//             missing = missing ^ (i + 1) ^ nums[i];
//         }

//         return missing;
//     }
// };

// prob 268. Missing number
// class Solution
// {
// public:
//     int missingNumber(vector<int> &nums)
//     {
//         int sum = 0;
//         int n = nums.size();
//         int ans = 0;
//         for (int i = 0; i < n; i++)
//         {
//             sum = sum + nums[i];
//         }

//         int idealSum = (((n) * (n + 1)) / 2);

//         return ans = idealSum - sum;
//     }
// };

// Rotated Array
// class Solution
// {
// public:
//     void rotate(vector<int> &nums, int k)
//     {
//         int n = nums.size();
//         vector<int> ans(n);

//         for (int i = 0; i < n; i++)
//         {
//             int newIndex = (i + k) % n;
//             ans[newIndex] = nums[i];
//         }

//         nums = ans;
//     }
// };

// class Solution
// {
// public:
//     void sortColors(vector<int> &nums)
//     {
//         int n = nums.size();
//         int index = 0;
//         int left = 0;
//         int right = n - 1;
//         while (index <= right)
//         {
//             if (nums[index] == 0)
//             {
//                 swap(nums[index], nums[left]);
//                 left++;
//                 index++;
//             }
//             else if (nums[index] == 2)
//             {
//                 swap(nums[index], nums[right]);
//                 right--;
//             }
//             else
//             {
//                 index++;
//             }

//         }
//     }
// };

// 75. Sort Colors (LeetCode Problem)
// class Solution
// {
// public:
//     void sortColors(vector<int> &nums)
//     {
//         for (int i = 0; i < nums.size(); i++)
//         {
//             for (int j = i; j < nums.size(); j++)
//             {
//                 if (nums[i] > nums[j])
//                 {
//                     swap(nums[i], nums[j]);
//                 }
//             }
//         }
//     }
// };

// program to seprate negative nubmers and positive numbers in an array
// #include <iostream>
// using namespace std;

// int sepNegPos(int arr[], int arrSize)
// {
//     for (int index = 0; index < arrSize; index++)
//     {
//         for (int k = 0; k < arrSize; k++)
//         {
//             if (arr[index] < 0)
//             {
//                 swap(arr[index], arr[k]);
//             }
//         }
//     }
// }

// int printArr(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// int main()
// {
//     int arr[] = {-3, -45, 55, -54, 23, -42, 32, 34, -45};
//     int arrSize = sizeof(arr) / sizeof(int);

//     sepNegPos(arr, arrSize);
//     printArr(arr, arrSize);

//     return 0;
// }