//SORTING

// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;

// int main() {
//     int arr[] = {50, 20, 40, 10, 30};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     // 1. sort()
//     sort(arr, arr+n);
//     cout << "Sorted array: ";
//     for(int x : arr) cout << x << " ";
//     cout << endl;

//     // 2. sort with comparator (descending)
//     sort(arr, arr+n, greater<int>());
//     cout << "Descending order: ";
//     for(int x : arr) cout << x << " ";
//     cout << endl;

//     // 3. stable_sort()
//     vector<pair<int,int>> v = {{1,2}, {2,2}, {1,1}};
//     stable_sort(v.begin(), v.end(), [](auto &a, auto &b){
//         return a.second < b.second;
//     });
//     cout << "Stable sort by second: ";
//     for(auto &p : v) cout << "(" << p.first << "," << p.second << ") ";
//     cout << endl;

//     // 4. partial_sort()
//     vector<int> nums = {9, 4, 7, 1, 3, 6};
//     partial_sort(nums.begin(), nums.begin()+3, nums.end());
//     cout << "Top 3 smallest: ";
//     for(int i=0; i<3; i++) cout << nums[i] << " ";
//     cout << endl;

//     // 5. nth_element()
//     vector<int> data = {7, 2, 1, 6, 8, 5, 3, 4};
//     nth_element(data.begin(), data.begin()+4, data.end());
//     cout << "5th smallest element: " << data[4] << endl;

//     // 6. is_sorted()
//     cout << "Is array sorted? " << (is_sorted(arr, arr+n) ? "Yes" : "No") << endl;

//     return 0;
// }

//////////////////////////////////////////////////

// #include <iostream>
// #include <algorithm> // for sort()
// #include <vector>
// using namespace std;

// int main() {
//     // ------------------ Sorting an Array ------------------
//     int arr[] = {50, 20, 40, 10, 30};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     // Sort array in ascending order
//     sort(arr, arr+n);
//     cout << "Array sorted in ascending order: ";
//     for(int i=0; i<n; i++) cout << arr[i] << " ";
//     cout << endl;

//     // Sort array in descending order
//     sort(arr, arr+n, greater<int>());
//     cout << "Array sorted in descending order: ";
//     for(int i=0; i<n; i++) cout << arr[i] << " ";
//     cout << endl;

//     // ------------------ Sorting a Vector ------------------
//     vector<int> v = {9, 4, 7, 1, 3, 6};

//     // Sort vector in ascending order
//     sort(v.begin(), v.end());
//     cout << "Vector sorted in ascending order: ";
//     for(int x : v) cout << x << " ";
//     cout << endl;

//     // Sort vector in descending order
//     sort(v.begin(), v.end(), greater<int>());
//     cout << "Vector sorted in descending order: ";
//     for(int x : v) cout << x << " ";
//     cout << endl;

//     return 0;
// }


////////////////////////////////////////////
// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;

// // Comparator function
// bool compareDesc(int a, int b) {
//     return a > b; // true if a should come before b
// }

// int main() {
//     vector<int> v = {5, 2, 8, 1, 3};

//     sort(v.begin(), v.end(), compareDesc);

//     cout << "Sorted in descending order: ";
//     for(int x : v) cout << x << " ";
// }

// /////////////////////////////////////////////
// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;

// bool cmp(pair<int,int> a, pair<int,int> b)
// {
//     return a.second < b.second;
// }

// int main()
// {
//     vector<pair<int,int>> v = {{1,5},{2,3},{4,1}};

//     sort(v.begin(), v.end(), cmp);

//     for(auto i : v)
//         cout<<i.first<<" "<<i.second<<endl;
// }

////////////////////////////////////
//REVERSE
// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> v = {1, 2, 3, 4, 5};

//     reverse(v.begin(), v.end());

//     cout << "Reversed vector: ";
//     for(int x : v) cout << x << " ";
// }

////////////////////////////////////////////
//NEXT PERMUTATION
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main() {
//     int arr[] = {1, 2, 3};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     // Generate next permutation
//     if(next_permutation(arr, arr+n)) {
//         cout << "Next permutation: ";
//         for(int i=0; i<n; i++) cout << arr[i] << " ";
//     } else {
//         cout << "No next permutation, array reset to smallest.";
//     }
// }


/////////////////////////////////////
//prev_permutatio
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main() {
//     int arr[] = {1, 3, 2};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     if(prev_permutation(arr, arr+n)) {
//         cout << "Previous permutation: ";
//         for(int i=0; i<n; i++) cout << arr[i] << " ";
//     } else {
//         cout << "No previous permutation, array reset to largest.";
//     }
// }


///////////////////////////////////////
//SWAP
// #include <iostream>
// #include <algorithm> // for swap
// using namespace std;

// int main() {
//     int a = 10, b = 20;
//     swap(a, b);
//     cout << "After swap: a = " << a << ", b = " << b << endl;
// }
///////////////////////////////////////////////
//MAX
// #include <iostream>
// #include <algorithm> // for max
// using namespace std;

// int main() {
//     int x = 15, y = 25;
//     cout << "Maximum is: " << max(x, y) << endl;
// }


///////////////////////////////////////////
//MIN
#include <iostream>
#include <algorithm> // for min
using namespace std;

int main() {
    int x = 15, y = 25;
    cout << "Minimum is: " << min(x, y) << endl;
}
