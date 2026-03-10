//write to a file

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("example.txt"); // create/open file
    fout << "Hello Mohit, this is file handling in C++!";
    fout.close();
    cout << "Data written successfully.";
}
