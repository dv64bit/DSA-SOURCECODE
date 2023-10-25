// Q2 #724. Find Pivot Index [leetcode]



//Q1 Key Pair [GFG]
// class Solution
// {
// public:
//     // Function to check if array has 2 elements
//     // whose sum is equal to the given value
//     bool hasArrayTwoCandidates(int arr[], int n, int x)
//     {
//         sort(arr, arr + n);

//         int low = 0;
//         int high = n - 1;

//         while (high > low)
//         {
//             if (arr[low] + arr[high] == x)
//             {
//                 return true;
//             }
//             else if (arr[low] + arr[high] > x)
//             {
//                 high--;
//             }
//             else
//             {
//                 low++;
//             }
//         }
//         return false;
//     }
// };