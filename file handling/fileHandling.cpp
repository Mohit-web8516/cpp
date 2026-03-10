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

// #include <iostream>
// #include <fstream>
// using namespace std;

// int main() {
//     ifstream fin("example.txt");
//     string line;
//     while(getline(fin, line)) {
//         cout << line << "\n";
//     }
//     fin.close();
// }

//////////////////////////////////

//Append Data to a file

// #include <iostream>
// #include <fstream>
// using namespace std;

// int main() {
//     ofstream fout("example.txt", ios::app); // append mode
//     fout << "\nThis line is appended.";
//     fout.close();
//     cout << "Data appended successfully.";
// }

////////////////////////////////////////

//Count words in a file

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("example.txt");
    string word;
    int count=0;
    while(fin >> word) count++;
    fin.close();
    cout << "Total words: " << count;
}
