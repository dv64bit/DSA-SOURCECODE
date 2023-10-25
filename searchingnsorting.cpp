// 852. Peak Index in a Mountain Array
// class Solution
// {
// public:
//     int peakIndexInMountainArray(vector<int> &arr)
//     {
//         int n = arr.size();
        
//         int start = 0;
//         int end = n - 1;
//         int mid = start + (end - start) / 2;

//         while (start < end) //kyuki yaha pe program infinite loop mai fas sakta hai isliye hum '<=' ki jagha sirf '<' use karenge
//         {
//             if (arr[mid] < arr[mid + 1])
//             {
//                 // iska matlab mai A wali line mai hu and peak right mai exist karti hai
//                 start = mid + 1;
//             }
//             else
//             {
//                 // iska matlab hai ki ya toh mai B line pe hu ya toh mai peak element pe hu
//                 end = mid;
//             }
//             // ab mid ko update karna hai
//             mid = start + (end - start) / 2;
//         }
//         return start;
//     }
// };

// program to find the last occurence of the target in the sorted array
// #include <iostream>
// using namespace std;

// int findLastOccrence(int arr[], int arrSize, int target)
// {
//     int start = 0;
//     int end = arrSize - 1;
//     int mid = (start / 2) + (end / 2);
//     int tempAns = -1;

//     while (start <= end)
//     {
//         if (arr[mid] == target)
//         {
//             tempAns = mid;
//             start = mid + 1;
//         }
//         else if (arr[mid] > target)
//         {
//             end = mid - 1;
//         }
//         else if (arr[mid] < target)
//         {
//             start = mid + 1;
//         }
//         mid = (start / 2) + (end / 2);
//     }

//     return tempAns;
// }

// int firstOccurence(int arr[], int arrSize, int target)
// {
//     int start = 0;
//     int end = arrSize - 1;
//     int mid = (start / 2) + (end / 2);
//     int tempAns = -1;

//     while (start <= end)
//     {
//         if (arr[mid] == target)
//         {
//             tempAns = mid;
//             end = mid - 1;
//         }
//         else if (arr[mid] > target)
//         {
//             end = mid - 1;
//         }
//         else if (arr[mid] < target)
//         {
//             start = mid + 1;
//         }

//         mid = (start + end) / 2;
//     }
//     return tempAns;
// }

// int binarySearch(int arr[], int arrSize, int target)
// {
//     int start = 0;
//     int end = arrSize - 1;
//     int mid = (start + end) / 2;

//     while (start <= end)
//     {
//         if (arr[mid] == target)
//         {
//             return mid;
//         }
//         else if (target > arr[mid])
//         {
//             start = mid + 1;
//         }
//         else if (target < arr[mid])
//         {
//             end = mid - 1;
//         }
//         mid = (start + end) / 2;
//     }

//     return -1;
// }

// int main()
// {
//     int arr1[] = {1, 2, 7, 7, 7, 7, 7, 9, 8};
//     int arr1Size = sizeof(arr1) / sizeof(arr1[0]);
//     int target1 = 7;
//     int ansIndex = findLastOccrence(arr1, arr1Size, target1);

//     cout << endl;

//     if (ansIndex == -1)
//     {
//         cout << "Your traget is at not present in the array.";
//     }
//     else
//     {
//         cout << "The last occuerence of the target is at Index: " << ansIndex;
//     }

//     return 0;
// }

// // program to find the first occurence of the target in the sorted array
// #include <iostream>
// using namespace std;

// int firstOccurence(int arr[], int arrSize, int target)
// {
//     int start = 0;
//     int end = arrSize - 1;
// int mid = (start / 2) + (end / 2);
//     int tempAns = -1;

//     while (start <= end)
//     {
//         if (arr[mid] == target)
//         {
//             tempAns = mid;
//             end = mid - 1;
//         }
//         else if (arr[mid] > target)
//         {
//             end = mid - 1;
//         }
//         else if (arr[mid] < target)
//         {
//             start = mid + 1;
//         }

//         mid = (start + end) / 2;
//     }
//     return tempAns;
// }

// int binarySearch(int arr[], int arrSize, int target)
// {
//     int start = 0;
//     int end = arrSize - 1;
//     int mid = (start + end) / 2;

//     while (start <= end)
//     {
//         if (arr[mid] == target)
//         {
//             return mid;
//         }
//         else if (target > arr[mid])
//         {
//             start = mid + 1;
//         }
//         else if (target < arr[mid])
//         {
//             end = mid - 1;
//         }
//         mid = (start + end) / 2;
//     }

//     return -1;
// }

// int main()
// {
//     int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8};
//     int arr2[] = {1, 2, 3, 3, 3, 7, 8};
//     int arr1Size = sizeof(arr1) / sizeof(arr1[0]);
//     int arr2Size = sizeof(arr2) / sizeof(arr2[0]);
//     int target1 = 7;
//     int target2 = 3;
//     int ansIndex = binarySearch(arr1, arr1Size, target1);
//     int firstOccIndex = firstOccurence(arr2, arr2Size, target2);

//     if (ansIndex == -1)
//     {
//         cout << "Your traget is at not present in the array.";
//     }
//     else
//     {
//         cout << "Your traget is at Index: " << ansIndex << " of the array.";
//     }

//     cout << endl;

//     if (firstOccIndex == -1)
//     {
//         cout << "Your traget is at not present in the array.";
//     }
//     else
//     {
//         cout << "The first occuerence of the target is at Index: " << firstOccIndex;
//     }

//     return 0;
// }

// // Binary Search Code
// #include <iostream>
// using namespace std;

// int binarySearch(int arr[], int arrSize, int target)
// {
//     int start = 0;
//     int end = arrSize - 1;
//     int mid = (start + end) / 2;

//     while (start <= end)
//     {
//         if (arr[mid] == target)
//         {
//             return mid;
//         }
//         else if (target > arr[mid])
//         {
//             start = mid + 1;
//         }
//         else if (target < arr[mid])
//         {
//             end = mid - 1;
//         }
//         mid = (start + end) / 2;
//     }

//     return -1;
// }

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
//     int arrSize = sizeof(arr) / sizeof(arr[0]);
//     int target = 7;
//     int ansIndex = binarySearch(arr, arrSize, target);

//     if (ansIndex == -1)
//     {
//         cout << "Your traget is at not present in the array.";
//     }
//     else
//     {
//         cout << "Your traget is at Index: " << ansIndex << " of the array.";
//     }

//     return 0;
// }