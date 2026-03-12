/*Question
Write a C++ program to:

Take n integers as input.

Store them in a vector.

Find the maximum, minimum, and average of the numbers.

Print the results.*/


// #include <iostream>
// #include <vector>
// #include <algorithm> // for min_element, max_element
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter number of elements: ";
//     cin >> n;

//     vector<int> arr(n);
//     cout << "Enter " << n << " integers:\n";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

   
//     int minVal = *min_element(arr.begin(), arr.end());
//     int maxVal = *max_element(arr.begin(), arr.end());

//     // Calculate average
//     double sum = 0;
//     for (int num : arr) {
//         sum += num;
//     }
//     double avg = sum / n;

    
//     cout << "Minimum: " << minVal << endl;
//     cout << "Maximum: " << maxVal << endl;
//     cout << "Average: " << avg << endl;

//     return 0;
// }
