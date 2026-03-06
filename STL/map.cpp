/*What is a map?
A map stores elements as key-value pairs.

Each key is unique and automatically sorted (by default, in ascending order).

Internally, it is implemented as a balanced binary search tree (usually Red-Black Tree).

Lookup, insertion, and deletion operations are O(log n).*/
/////////////////////////////////////////////
/*Common Functions
Function	Description
insert({key, value})	Insert a key-value pair
operator[]	Access/modify value by key
at(key)	Access value by key (throws error if not found)
find(key)	Returns iterator to key if found
erase(key)	Removes element by key
size()	Number of elements
empty()	Check if map is empty
clear()	Remove all elements*/


/////////////////////////////////////
// #include <iostream>
// #include <map>
// using namespace std;

// int main() {
//     map<int, string> students;

//     students[1] = "raj";
//     students[2] = "Rahul";
//     students.insert({3, "Amit"});

//     for(auto p : students) {
//         cout << p.first << " -> " << p.second << endl;
//     }
// }


//////////////////////////////
// #include <iostream>
// #include <map>
// using namespace std;

// int main() {
//     map<int, string> students = {{1,"john"}, {2,"Rahul"}, {3,"Amit"}};

//     auto it = students.find(2);
//     if(it != students.end()) {
//         cout << "Found: " << it->second << endl;
//         students.erase(it); // remove key 2
//     }

//     for(auto p : students) cout << p.first << " -> " << p.second << endl;
// }



////////////////////////////////////
//////////////////////////////////
// #include <iostream>
// #include <map>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> arr = {1,2,2,3,3,3};
//     map<int,int> freq;

//     for(int x : arr) freq[x]++;

//     for(auto p : freq) {
//         cout << p.first << " occurs " << p.second << " times\n";
//     }
// }
//////////////////////////////////////////////
/////////////////////////////////////////////


// #include <iostream>
// #include <map>
// using namespace std;

// int main() {
//     // Declare a map of int -> string
//     map<int, string> students;

//     // 1. insert()
//     students.insert({1, "MOHAN"});
//     students.insert({2, "Rahul"});
//     students.insert({3, "Amit"});

//     // 2. size()
//     cout << "Size of map: " << students.size() << endl;

//     // 3. empty()
//     if(students.empty())
//         cout << "Map is empty" << endl;
//     else
//         cout << "Map is not empty" << endl;

//     // 4. count()
//     cout << "Count of key 2: " << students.count(2) << endl; // returns 1 if exists, else 0
//     cout << "Count of key 5: " << students.count(5) << endl;

//     // 5. find()
//     auto it = students.find(3);
//     if(it != students.end())
//         cout << "Found key 3 -> " << it->second << endl;
//     else
//         cout << "Key 3 not found" << endl;

//     // 6. erase()
//     students.erase(2); // remove key 2

//     // Print all elements
//     cout << "\nCurrent map elements:\n";
//     for(auto p : students) {
//         cout << p.first << " -> " << p.second << endl;
//     }

//     // 7. clear()
//     students.clear();
//     cout << "\nAfter clear, size: " << students.size() << endl;

//     return 0;
// }

/////////////////////////////////////////////
/*multimap
Stores key-value pairs like map.

Keys are not unique → allows multiple elements with the same key.

Keys are stored in sorted order (ascending by default).

Internally implemented as a balanced BST (Red-Black Tree).

Operations (insert, find, erase) are O(log n).*/

#include <iostream>
#include <map>
using namespace std;

int main() {
    multimap<int, string> mm;

    mm.insert({1, "MOHAN"});
    mm.insert({2, "Rahul"});
    mm.insert({1, "Amit"}); // duplicate key allowed

    for(auto p : mm) {
        cout << p.first << " -> " << p.second << endl;
    }
}
