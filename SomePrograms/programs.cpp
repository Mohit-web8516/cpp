//1. Reverse a String using Stack

#include <iostream>
#include <stack>
using namespace std;

int main() {
    string str = "Mohan";
    stack<char> st;
    for(char c : str) st.push(c);

    cout << "Reversed: ";
    while(!st.empty()) {
        cout << st.top();
        st.pop();
    }
}
