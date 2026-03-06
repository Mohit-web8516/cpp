/*What is a set?
A set stores unique elements in sorted order (ascending by default).

Internally, it is implemented as a balanced BST (Red-Black Tree).

Operations like insertion, deletion, and search are O(log n).

Duplicate values are not allowed (for duplicates, use multiset).

⚡ Key Functions
Function	Description
insert(x)	Adds element x (ignored if already present)
size()	Returns number of elements
empty()	Checks if set is empty
count(x)	Returns 1 if x exists, else 0
find(x)	Returns iterator to element if found
erase(x)	Removes element x
clear()	Removes all elements
begin() / end()	Iterators for traversal
lower_bound(x)	First element ≥ x
upper_bound(x)	First element > x*/

// #include <iostream>
// #include <set>
// using namespace std;

// int main() {
//     set<int> s;

//     // 1. insert()
//     s.insert(10);
//     s.insert(20);
//     s.insert(30);
//     s.insert(20); // duplicate ignored

//     // 2. size()
//     cout << "Size of set: " << s.size() << endl;

//     // 3. empty()
//     cout << (s.empty() ? "Set is empty" : "Set is not empty") << endl;

//     // 4. count()
//     cout << "Count of 20: " << s.count(20) << endl;
//     cout << "Count of 50: " << s.count(50) << endl;

//     // 5. find()
//     auto it = s.find(30);
//     if(it != s.end())
//         cout << "Found: " << *it << endl;

//     // 6. erase()
//     s.erase(20);

//     // 7. Traversal
//     cout << "Elements in set: ";
//     for(auto x : s) cout << x << " ";
//     cout << endl;

//     // 8. lower_bound & upper_bound
//     cout << "Lower bound of 15: " << *s.lower_bound(15) << endl;
//     cout << "Upper bound of 15: " << *s.upper_bound(15) << endl;

//     // 9. clear()
//     s.clear();
//     cout << "After clear, size: " << s.size() << endl;

//     return 0;
// }

////////////////////////////////////////////
/*multiset
Stores elements in sorted order (ascending by default).

Duplicates are allowed (unlike set).

Internally implemented as a balanced BST (Red-Black Tree).

Operations (insert, erase, find) are O(log n).*/

/////////////////////////////////
