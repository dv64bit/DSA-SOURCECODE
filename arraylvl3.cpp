// program to print transpose of an array
#include <iostream>
using namespace std;

void transposeArray(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int k = i; k < col; k++)
        {
            swap(arr[i][k], arr[k][i]);
        }
    }
}

void printingArray(int arr[][3], int row, int col)
{
    // printing the array
    for (int i = 0; i < row; i++)
    {
        for (int k = 0; k < col; k++)
        {
            cout << arr[i][k] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int row = 3;
    int col = 3;
    int arr[3][3] = {
        {10, 20, 5},
        {2, 4, 6},
        {10, 15, 15}};

    cout << "Array Before Transpose:" << endl;
    printingArray(arr, row, col);
    cout << endl;
    transposeArray(arr, row, col);
    cout << "Array After Transpose:" << endl;
    printingArray(arr, row, col);

    return 0;
}

// program to find the diagnol and reverse diagnol element sum of the array
// #include <iostream>
// using namespace std;

// int reverseDiagnolSum(int arr[][3], int row, int col)
// {
//     int sum = 0;
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {

//         }

//     }

//     cout << "The reverse Diagnol sum of the array is :" << sum << endl;
// }

// int diagnolSum(int arr[][3], int row, int col)
// {
//     int sum = 0;
//     for (int i = 0; i < row; i++)
//     {
//         sum = sum + arr[i][i];
//     }
//     cout << "The Diagnol sum of the array is :" << sum << endl;
// }

// int main()
// {
//     int row = 3;
//     int col = 3;
//     int arr[3][3] = {
//         {10, 20, 5},
//         {2, 4, 6},
//         {10, 15, 15}};

//     diagnolSum(arr, row, col);
//     return 0;
// }

// program to find the col sum of the array
// #include <iostream>
// using namespace std;

// int rowSum(int arr[][4], int row, int col)
// {
//     for (int i = 0; i < col; i++)
//     {
//         int sum = 0;
//         for (int j = 0; j < row; j++)
//         {
//             sum = sum + arr[j][i];
//         }
//         cout << "The sum for col " << i << " :" << sum << endl;
//     }
// }

// int main()
// {
//     int row = 3;
//     int col = 4;
//     int arr[3][4] = {
//         {10, 20, 5, 7},
//         {2, 4, 6, 8},
//         {10, 15, 15, 10}};

//     rowSum(arr, row, col);
//     return 0;
// }

// program to find the row sum of the array
// #include <iostream>
// using namespace std;

// int rowSum(int arr[][4], int row, int col)
// {
//     for (int i = 0; i < row; i++)
//     {
//         int sum = 0;
//         for (int j = 0; j < col; j++)
//         {
//             sum = sum + arr[i][j];
//         }
//         cout << "The sum for row " << i << " :" << sum << endl;
//     }
// }

// int main()
// {
//     int row = 3;
//     int col = 4;
//     int arr[3][4] = {
//         {10, 20, 5, 7},
//         {2, 4, 6, 8},
//         {10, 15, 15, 10}};

//     rowSum(arr, row, col);
//     return 0;
// }

// program to find amx and min element in the array
// #include <iostream>
// #include <limits.h>

// using namespace std;

// int maxElement(int arr[][4], int row, int col)
// {
//     int maxAns = INT_MIN;
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             if (maxAns < arr[i][j])
//             {
//                 maxAns = arr[i][j];
//             }
//         }
//     }
//     return maxAns;
// }
// int minElement(int arr[][4], int row, int col)
// {
//     int minAns = INT_MAX;
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             if (minAns > arr[i][j])
//             {
//                 minAns = arr[i][j];
//             }
//         }
//     }
//     return minAns;
// }

// int main()
// {
//     int row = 4;
//     int col = 4;

//     int arr[4][4] = {
//         {1, 2, 3, 4},
//         {5, 6, 7, 8},
//         {9, 10, 11, 12},
//         {13, 14, 15, 16}};

//     cout << "The maximum element of the array is: " << maxElement(arr, row, col) << endl;
//     cout << "The minimum element of the array is: " << minElement(arr, row, col) << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// bool findTarget(int arr[][4], int row, int col, int target)
// {
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             if (arr[i][j] == target)
//             {
//                 return true;
//             }
//         }
//     }
//     return false;
// }

// int main()
// {
//     int arr[3][4] = {
//         {1, 2, 3, 4},
//         {5, 6, 8, 9},
//         {10, 11, 12, 13}};

//     int target = 88;

//     cout << findTarget(arr, 3, 4, target) << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void colWisePrint(int arr[][4], int row, int col)
// {
//     for (int i = 0; i < col; i++)
//     {
//         for (int j = 0; j < row; j++)
//         {
//             cout << arr[j][i] << " ";
//         }
//         cout << endl;
//     }
// }

// void rowWisePrint(int arr[][4], int row, int col)
// {
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// int main()
// {
//     int row = 3;
//     int col = 4;

//     int arr[3][4] = {
//         {1, 2, 3, 4},
//         {5, 6, 7, 8},
//         {9, 10, 11, 12}};

//     colWisePrint(arr, row, col);
//     rowWisePrint(arr, row, col);

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[2][4] = {
//         {1, 2, 3, 4},
//         {5, 6, 7, 8}};

//     int arrSize = sizeof(arr)/sizeof(int);
//     cout << arrSize << endl;

//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             cout<<arr[i][j]<<endl;
//         }

//     }

//     // cout << arr[1][2];
//     return 0;
// }