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

// #include <iostream>
// #include <fstream>
// using namespace std;

// int main() {
//     ifstream fin("example.txt");
//     string word;
//     int count=0;
//     while(fin >> word) count++;
//     fin.close();
//     cout << "Total words: " << count;
// }


///////////////////////////////////////////////////
///////COPY FILE CONTENT TO ANOTHER FILE

// #include <iostream>
// #include <fstream>
// using namespace std;

// int main() {
//     ifstream fin("example.txt");
//     ofstream fout("copy.txt");

//     string line;
//     while(getline(fin, line)) {
//         fout << line << "\n";
//     }

//     fin.close();
//     fout.close();
//     cout << "File copied successfully.";
// }


////////////////////////////////////////////////

//MINI PROJECT 
/*Student Record System (File Handling Project)
Features:
Add new student record

Display all records

Search for a student by roll number

Delete a student record

Append new data*/



/////////////////////////////////////////
//PROGRAM CODE


#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Student {
    int roll;
    string name;
    int marks;
};

void addStudent() {
    ofstream fout("students.txt", ios::app);
    Student s;
    cout << "Enter Roll No: "; cin >> s.roll;
    cout << "Enter Name: "; cin >> s.name;
    cout << "Enter Marks: "; cin >> s.marks;
    fout << s.roll << " " << s.name << " " << s.marks << "\n";
    fout.close();
    cout << "Record added successfully!\n";
}

void displayStudents() {
    ifstream fin("students.txt");
    Student s;
    cout << "All Student Records:\n";
    while(fin >> s.roll >> s.name >> s.marks) {
        cout << s.roll << " " << s.name << " " << s.marks << "\n";
    }
    fin.close();
}

void searchStudent() {
    ifstream fin("students.txt");
    int roll; cout << "Enter Roll No to search: "; cin >> roll;
    Student s; bool found=false;
    while(fin >> s.roll >> s.name >> s.marks) {
        if(s.roll == roll) {
            cout << "Found: " << s.roll << " " << s.name << " " << s.marks << "\n";
            found=true; break;
        }
    }
    if(!found) cout << "Record not found!\n";
    fin.close();
}

void deleteStudent() {
    ifstream fin("students.txt");
    ofstream fout("temp.txt");
    int roll; cout << "Enter Roll No to delete: "; cin >> roll;
    Student s; bool deleted=false;
    while(fin >> s.roll >> s.name >> s.marks) {
        if(s.roll != roll) fout << s.roll << " " << s.name << " " << s.marks << "\n";
        else deleted=true;
    }
    fin.close(); fout.close();
    remove("students.txt");
    rename("temp.txt","students.txt");
    if(deleted) cout << "Record deleted!\n";
    else cout << "Record not found!\n";
}

int main() {
    int choice;
    do {
        cout << "\n--- Student Record System ---\n";
        cout << "1. Add Student\n2. Display Students\n3. Search Student\n4. Delete Student\n5. Exit\n";
        cout << "Enter choice: "; cin >> choice;
        switch(choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: searchStudent(); break;
            case 4: deleteStudent(); break;
            case 5: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while(choice!=5);
    return 0;
}
