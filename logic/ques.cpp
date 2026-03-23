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



#include <iostream>
using namespace std;

int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr)/sizeof(arr[0]);

    int maxSum = arr[0], currSum = arr[0];
    for(int i=1; i<n; i++) {
        currSum = max(arr[i], currSum + arr[i]);
        maxSum = max(maxSum, currSum);
    }

    cout << "Maximum Subarray Sum: " << maxSum;
    return 0;
}
