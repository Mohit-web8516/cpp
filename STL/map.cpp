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
#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> students;

    students[1] = "raj";
    students[2] = "Rahul";
    students.insert({3, "Amit"});

    for(auto p : students) {
        cout << p.first << " -> " << p.second << endl;
    }
}
