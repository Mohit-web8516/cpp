// #include <iostream>
// #include <deque>
// #include <algorithm>
// #include <list>
// #include <vector>
// using namespace std;

// int main() {
//     pair <int, int> dq= {40, 10};
//     cout << dq.first<<endl;
//     cout << dq.second << endl;
//     return 0 ;
// }


///////////////////////////////////
#include <iostream>
#include <utility>
using namespace std;

int main() {
    pair<int, string> student(1, "john");

    cout << "Roll No: " << student.first << endl;
    cout << "Name: " << student.second << endl;
}
