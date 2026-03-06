/*Common Functions
Function	Description
push(x)	Add element to top
pop()	Remove top element
top()	Access top element
empty()	Check if stack is empty
size()	Number of elements*/


// #include <iostream>
// #include <stack>
// using namespace std;

// int main() {
//     stack<int> s;

//     s.push(10);
//     s.push(20);
//     s.push(30);

//     cout << "Top element: " << s.top() << endl; // 30

//     s.pop(); // removes 30
//     cout << "New top: " << s.top() << endl;     // 20

//     cout << "Size: " << s.size() << endl;       // 2
// }


///////////////////////////////////////
////////////////////////////////////////
#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<string> s;

    if(s.empty()) cout << "Stack is empty\n";

    s.push("Mohit");
    s.push("Rahul");

    cout << "Top: " << s.top() << endl; // Rahul
}
