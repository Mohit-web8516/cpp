/*What is a deque?
A deque is a dynamic array that allows fast insertion and deletion at both ends (front and back).

Unlike vector, which is efficient mainly at the back, deque is optimized for both ends.

Internally, it uses a segmented array structure (blocks of memory), so it can grow/shrink efficiently.

⚡ Key Properties
Random access: Supports indexing (dq[i]) like vectors.

Efficient at both ends: push_front() and push_back() are O(1).

Middle operations: Insertion/deletion in the middle is slower (O(n)).

Iterators: Support random access iterators (like vectors).

🛠 Common Functions
Function	Description
push_back(x) ==	Add element at end
push_front(x)==	Add element at front
pop_back()==	Remove last element
pop_front()==	Remove first element
at(i)	== Access element at index with bounds checking
operator[]==	Access element at index (no bounds check)
front() / back()==	First and last element
insert(pos, x)	== Insert element at position
erase(pos) ==	Remove element at position
clear() ==	Remove all elements
size() ==	Number of elements
empty() == Check if deque is empty	*/



///////////////////////////////////////
// #include <iostream>
// #include <deque>
// using namespace std;

// int main() {
//     deque<int> dq;

//     dq.push_back(10);   // [10]
//     dq.push_front(5);   // [5, 10]
//     dq.push_back(20);   // [5, 10, 20]

//     cout << "Deque elements: ";
//     for(int n : dq) cout << n << " ";
// }


/////////////////////////////////////////
#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main() {
    deque<int> dq = {40, 10, 30, 20};

    sort(dq.begin(), dq.end()); // sort ascending

    cout << "Sorted deque: ";
    for(int n : dq) cout << n << " " << endl;

    cout << "***" << endl ;
    cout << dq[2] ; //30
}
