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
// #include <iostream>
// #include <utility>
// using namespace std;

// int main() {
//     pair<int, string> student(1, "john");

//     cout << "Roll No: " << student.first << endl;
//     cout << "Name: " << student.second << endl;
// }

/////////////////////////////////////////
// #include <iostream>
// #include <deque>
// #include <algorithm>
// using namespace std;

// int main() {
//     deque<int> dq = {40, 10, 30, 20};

//     sort(dq.begin(), dq.end()); // sort ascending

//     cout << "Sorted deque: ";
//     for(int n : dq) cout << n << " ";
// }

///////////////////////////////////////////////////////
#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <deque>

using namespace std;

int main() {
    // Initialize vector of pairs
    vector<pair<int,int>> dq = {{40, 10}, {30, 20}};
    
    // Insert using push_back
    dq.push_back({22, 33});
    
    // Insert using emplace_back (constructs in place, slightly faster)
    dq.emplace_back(55, 66);

    // Print all pairs
    for(auto p : dq){
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}
