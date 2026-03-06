/*Function	Description
push(x)	Insert element
pop()	Remove top element
top()	Access top element
empty()	Check if queue is empty
size()	Number of elements*/


#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> pq;

    pq.push(10);
    pq.push(30);
    pq.push(20);

    cout << "Top element: " << pq.top() << endl; // 30

    pq.pop(); // removes 30
    cout << "New top: " << pq.top() << endl;     // 20
}
