/*Common Functions
Function	Description
push(x)	Add element at the back
pop()	Remove element from the front
front()	Access the first element
back()	Access the last element
empty()	Check if queue is empty
size()	Number of elements*/


// ////////////////////////////////
// #include <iostream>
// #include <queue>
// using namespace std;

// int main() {
//     queue<int> q;

//     q.push(10);
//     q.push(20);
//     q.push(30);

//     cout << "Front: " << q.front() << endl; // 10
//     cout << "Back: " << q.back() << endl;   // 30

//     q.pop(); // removes 10
//     cout << "New Front: " << q.front() << endl; // 20
// }


////////////////////////////////////////////////

#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<string> q;
    q.push("RAM");
    q.push("Rahul");
    q.push("Amit");

    cout << "Queue elements (FIFO): ";
    while(!q.empty()) {
        cout << q.front() << " "; // process front
        q.pop();                  // remove front
    }
}
