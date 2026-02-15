//LENGTH = length() method is used to find the length of a string. It returns the number of characters in the string, including spaces and special characters.

// #include <iostream>
// using namespace std;
// int main(){
//     string name;
//     cout << "Enter your name:";
//     getline(cin, name);
//     if (name.length() > 15){
//         cout << "Your name is too long." << endl;
//     } else {
//         cout << "Your name is: " << name << endl;
//     }
// }

//EMPTY = ""
// it is a string literal that represents an empty string. It is often used to initialize string variables or to check if a string is empty. 
/////////////////////////////////////////////////////
// #include <iostream>
// using namespace std;
// int main (){
//     string name;
//     cout << "Enter the name of the boy: ";
//     getline(cin, name);
//     if(name.empty()){
//         cout << "You did not enter a name." << endl;
//     }
//     else {
//         cout << "the name of boy is : " << name << endl;
//     }
// }

//append = append() method is used to concatenate two strings. It takes a string as an argument and appends it to the end of the original string.
// #include <iostream>
// using namespace std;
// int main(){
//     string name;
//     cout << "Enter your name:";
//     getline(cin, name);
//     name.append(" is a good boy.");
//     cout << name << endl;
//     return 0;

    
// }

//////////////////////////////////////////////
//at = at() method is used to access a specific character in a string. It takes an index as an argument and returns the character at that index. The index starts from 0.
// #include <iostream>
// using namespace std;
// int main(){
//     string name;
//     cout << "Enter your name: ";
//     getline(cin, name);
//     cout << name.at(0) << endl;
//     cout << name.at(1) << endl;
//     cout <<  name.at(2) << endl;
//     return 0;
// }

//clear = clear() method is used to clear the contents of a string. It removes all characters from the string and makes it empty.

// #include <iostream>
// using namespace std;
// int main(){
//     string name;
//     cout << "Enter your name: ";
//     getline(cin, name);
//     name.clear();
//     if (name.empty()){
//         cout << "The string is empty." << endl;
//     } else {
//         cout << "The string is not empty." << endl;
//     }
//     return 0;
// }

////////////////////////////////////////////
//compare = compare() method is used to compare two strings. It returns an integer value based on the comparison. If the strings are equal, it returns 0. If the first string is less than the second string, it returns a negative value. If the first string is greater than the second string, it returns a positive value.

// #include <iostream>
// using namespace std;
// int main(){
//     string name1;
//     string name2;
    
//     cout << "Enter your name: ";
//     getline(cin,name1);
//     cout << "Enter your name:";
//     getline(cin, name2);
//    int result = mohityname1.compare(name2);
//     if (result == 0){
//         cout << "The strings are equal." << endl;
//     }
//     else if (result < 0){
//         cout << "The first string is less than the second string." << endl;
//     }
//     else {
//         cout << "The first string is greater than the second string." << endl;
//     }

// }



//////////////////////////////////////////////
//insert = insert() method is used to insert a string into another string at a specified position. It takes two arguments: the index where the string should be inserted and the string to be inserted.

// #include <iostream>
// using namespace std;
// int main(){
//     string name;
//     cout << "Enter your name: ";
//     getline(cin, name);
//     name.insert(0, "Hello, ");
//     cout << name << endl;
//     return 0;
// }


//find = find() method is used to find the first occurrence of a substring in a string. It takes a string as an argument and returns the index of the first occurrence of the substring. If the substring is not found, it returns -1.

// #include <iostream>
// using namespace std;
// int main (){
//     string name;
//     cout << "Enter your name: ";
//     getline(cin, name);
//    cout <<  name.find(" ");
//    return 0;
// }

///////////////////////////////////////
//erase = erase() method is used to remove a portion of a string. It takes two arguments: the index of the first character to be removed and the number of characters to be removed.

// #include <iostream>
// using namespace std;
// int main (){
//     string name;
//     cout << "Enter your name: ";
//     getline(cin, name);
//     name.erase(0, 6);
//    cout <<  name << endl;
//    return 0;
// }

