//write to a file

// #include <iostream>
// #include <fstream>
// using namespace std;

// int main() {
//     ofstream fout("example.txt"); // create/open file
//     fout << "Hello Mohan, this is file handling in C++!";
//     fout.close();
//     cout << "Data written successfully.";
// }


/****************************************** */

//Read from a file

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("example.txt");
    string line;
    while(getline(fin, line)) {
        cout << line << "\n";
    }
    fin.close();
}

