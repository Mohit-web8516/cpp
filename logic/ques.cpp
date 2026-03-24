//question based on while loop
//Find the largest digit in the given number. 
// #include <iostream>
// using namespace std;

// int main()
// {
//     int num, digit, largest = 0;
//     cout << "Enter a number: ";
//     cin >> num;

//     while(num != 0)
//     {
//         digit = num % 10;
//         if(digit > largest)
//         {
//             largest = digit;
//         }
//         num = num / 10;
//     }
//     cout << "Largest digit = " << largest;
//     return 0;
// }

//////////////////////////////////
//print all factor of a given num

// #include <iostream>
// using namespace std;

// int main()
// {
//     int num;
//     cout << "Enter number: ";
//     cin >> num;
//     cout << "Factors are: ";
//     for(int i = 1; i <= num; i++)
//     {
//         if(num % i == 0)
//         {
//             cout << i << " ";
//         }
//     }
//     return 0;
// }


//////////////////////////////////////

//sum of all factors of a number
// #include <iostream>
// using namespace std;

// int main()
// {
//     int num, sum = 0;
//     cout << "Enter number: ";
//     cin >> num;
//     for(int i = 1; i <= num; i++)
//     {
//         if(num % i == 0)
//         {
//             sum += i;
//         }
//     }
//     cout << "Sum of factors = " << sum;
//     return 0;
// }


/////////////////////////////
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[5] = {1, 2, 3, 4, 5};
//     // Traversal
//     for(int i = 0; i < 5; i++) {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

//////////////////////////////////////////
// 1. Reverse an Array

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     int start = 0, end = n-1;
//     while(start < end) {
//         swap(arr[start], arr[end]);
//         start++; end--;
//     }

//     cout << "Reversed Array: ";
//     for(int i=0; i<n; i++) cout << arr[i] << " ";
//     return 0;
// }

////////////////////////////////////
//min & max
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {10, 25, 3, 99, 45};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     int maxVal = arr[0], minVal = arr[0];
//     for(int i=1; i<n; i++) {
//         if(arr[i] > maxVal) maxVal = arr[i];
//         if(arr[i] < minVal) minVal = arr[i];
//     }

//     cout << "Maximum: " << maxVal << endl;
//     cout << "Minimum: " << minVal << endl;
//     return 0;
// }


/////////////////////////////////////////
//linear search

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {4, 7, 2, 9, 11};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int key = 9;

//     int pos = -1;
//     for(int i=0; i<n; i++) {
//         if(arr[i] == key) {
//             pos = i;
//             break;
//         }
//     }

//     if(pos != -1) cout << "Element found at index " << pos;
//     else cout << "Element not found";
//     return 0;
// }

//////////////////////////////////////
//binary search

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {2, 4, 6, 8, 10, 12};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int key = 10;

//     int low = 0, high = n-1, pos = -1;
//     while(low <= high) {
//         int mid = low + (high-low)/2;
//         if(arr[mid] == key) {
//             pos = mid;
//             break;
//         } else if(arr[mid] < key) low = mid+1;
//         else high = mid-1;
//     }

//     if(pos != -1) cout << "Element found at index " << pos;
//     else cout << "Element not found";
//     return 0;
// }


///////////////////////////////
//Kadane’s Algorithm (Max Subarray Sum)



// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     int maxSum = arr[0], currSum = arr[0];
//     for(int i=1; i<n; i++) {
//         currSum = max(arr[i], currSum + arr[i]);
//         maxSum = max(maxSum, currSum);
//     }

//     cout << "Maximum Subarray Sum: " << maxSum;
//     return 0;
// }


//////////////////////////////////////

////two sum problems

// #include <iostream>
// #include <unordered_set>
// using namespace std;

// int main() {
//     int arr[] = {2, 7, 11, 15};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int target = 9;

//     unordered_set<int> s;
//     bool found = false;

//     for(int i=0; i<n; i++) {
//         if(s.count(target - arr[i])) {
//             cout << "Pair found: " << arr[i] << " and " << target-arr[i];
//             found = true;
//             break;
//         }
//         s.insert(arr[i]);
//     }

//     if(!found) cout << "No pair found";
//     return 0;
// }



//////////////////////////////////

//Program 1: Maximum Non-Negative Product in a Matrix



// #include <bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     int maxProductPath(vector<vector<int>>& grid) {
//         const long long MOD = 1e9 + 7;
//         int m = grid.size(), n = grid[0].size();

//         vector<vector<long long>> maxProd(m, vector<long long>(n, 0));
//         vector<vector<long long>> minProd(m, vector<long long>(n, 0));

//         maxProd[0][0] = minProd[0][0] = grid[0][0];

//         // First row
//         for(int j=1; j<n; j++) {
//             maxProd[0][j] = maxProd[0][j-1] * grid[0][j];
//             minProd[0][j] = minProd[0][j-1] * grid[0][j];
//         }

//         // First column
//         for(int i=1; i<m; i++) {
//             maxProd[i][0] = maxProd[i-1][0] * grid[i][0];
//             minProd[i][0] = minProd[i-1][0] * grid[i][0];
//         }

//         // Rest of the matrix
//         for(int i=1; i<m; i++) {
//             for(int j=1; j<n; j++) {
//                 long long val = grid[i][j];
//                 long long maxFromTop = max(maxProd[i-1][j]*val, minProd[i-1][j]*val);
//                 long long maxFromLeft = max(maxProd[i][j-1]*val, minProd[i][j-1]*val);
//                 long long minFromTop = min(maxProd[i-1][j]*val, minProd[i-1][j]*val);
//                 long long minFromLeft = min(maxProd[i][j-1]*val, minProd[i][j-1]*val);

//                 maxProd[i][j] = max(maxFromTop, maxFromLeft);
//                 minProd[i][j] = min(minFromTop, minFromLeft);
//             }
//         }

//         long long result = maxProd[m-1][n-1];
//         if(result < 0) return -1;
//         return result % MOD;
//     }
// };

// int main() {
//     Solution sol;
//     vector<vector<int>> grid = {{1,-2,1},{1,-2,1},{3,-4,1}};
//     cout << sol.maxProductPath(grid) << endl; // Expected output: 8
//     return 0;
// }





//////////////////////////////////////////////


///Program 2: Kadane’s Algorithm (Maximum Subarray Sum)


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
//     int n = arr.size();

//     int maxSum = arr[0], currSum = arr[0];
//     for(int i=1; i<n; i++) {
//         currSum = max(arr[i], currSum + arr[i]);
//         maxSum = max(maxSum, currSum);
//     }

//     cout << "Maximum Subarray Sum: " << maxSum << endl; // Expected output: 6
//     return 0;
// }


/////////////////////////////////////////////

//Program 3: Binary Search in a Sorted Array

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {2, 4, 6, 8, 10, 12};
    int n = arr.size();
    int key = 10;

    int low = 0, high = n - 1;
    int pos = -1;

    while(low <= high) {
        int mid = low + (high - low) / 2;
        if(arr[mid] == key) {
            pos = mid;
            break;
        } else if(arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if(pos != -1) cout << "Element found at index " << pos << endl;
    else cout << "Element not found" << endl;

    return 0;
}
