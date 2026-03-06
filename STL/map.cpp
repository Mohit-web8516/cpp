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

