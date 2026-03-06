/*
Common Functions
Function ||||||||||||||	Description
push_back(x) =========	Add element at end
push_front(x)============	Add element at front
pop_back()	==========Remove last element
pop_front()==========	Remove first element
insert(pos, x)============	Insert element at given iterator position
erase(pos)============	Remove element at given iterator position
remove(x)==========	Remove all occurrences of value x
sort()============	Sort elements
reverse()==========	Reverse order of elements
clear()=========	Remove all elements
size()==============	Number of elements
empty()===========	Check if list is empty
*/


// #include <iostream>
// #include <list>
// using namespace std;

// int main() {
//     list<int> myList;
    
//     myList.emplace_back(15);
//     myList.push_back(10);
//     myList.push_back(20);
//     myList.push_front(5);

//     myList.pop_back();
//     myList.pop_front();

//     cout << "List elements: ";
//     for(int n : myList) 
//     cout << n << " ";
// }


//////////////////////////////////////////

#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> myList = {40, 10, 30, 20};

    myList.sort();     // sort ascending
    myList.reverse();  // reverse order

    for(int n : myList) cout << n << " ";
}
