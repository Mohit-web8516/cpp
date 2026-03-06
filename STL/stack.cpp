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
// #include <iostream>
// #include <stack>
// using namespace std;

// int main() {
//     stack<string> s;

//     if(s.empty()) cout << "Stack is empty\n";

//     s.push("johnt");
//     s.push("Rahul");

//     cout << "Top: " << s.top() << endl; // Rahul
// }

/////////////////////////////////////
// #include <iostream>
// #include <stack>
// using namespace std;

// int main() {
//     stack<int> s;

//     // Push elements
//     s.push(10);
//     s.push(20);
//     s.push(30);

//     // Process using while loop
//     cout << "Stack elements (top to bottom): ";
//     while(!s.empty()) {
//         cout << s.top() << " ";  // access top
//         s.pop();                 // remove top
//     }
//     return 0;
// }
///////////////////////////////////////////////
///////////////////////////////////////////////
#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s1, s2;

    // Fill s1
    s1.push(10);
    s1.push(20);

    // Fill s2
    s2.push(100);
    s2.push(200);
    s2.push(300);

    cout << "Before swap:" << endl;
    cout << "s1 top: " << s1.top() << endl; // 20
    cout << "s2 top: " << s2.top() << endl; // 300

    // Swap contents
    s1.swap(s2);

    cout << "\nAfter swap:" << endl;
    cout << "s1 top: " << s1.top() << endl; // 300
    cout << "s2 top: " << s2.top() << endl; // 20
}

