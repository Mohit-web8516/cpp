/*Function	Description
push(x)	Insert element
pop()	Remove top element
top()	Access top element
empty()	Check if queue is empty
size()	Number of elements*/


// #include <iostream>
// #include <queue>
// using namespace std;

// int main() {
//     priority_queue<int> pq;

//     pq.push(10);
//     pq.push(30);
//     pq.push(20);

//     cout << "Top element: " << pq.top() << endl; // 30

//     pq.pop(); // removes 30
//     cout << "New top: " << pq.top() << endl;     // 20
// }


/////////////////////////////////////////
// #include <iostream>
// #include <queue>
// #include <vector>
// using namespace std;

// int main() {
//     priority_queue<int, vector<int>, greater<int>> pq; // min-heap

//     pq.push(10);
//     pq.push(30);
//     pq.push(20);

//     cout << "Top element: " << pq.top() << endl; // 10
// }

///////////////////////////////////////////

#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<pair<int,int>> pq;

    pq.push({2, 100});
    pq.push({1, 200});
    pq.push({3, 50});

    cout << "Top pair: " << pq.top().first << " " << pq.top().second << endl;
}

