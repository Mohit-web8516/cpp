//////////////////////
/*

push_back(x) =======	Adds element x at the end
pop_back() =======	Removes last element
size()	 ======= Returns number of elements
capacity()	======= Returns allocated memory size
front() / back() =======	First and last element
insert(pos, x)	 =======Insert element at position
erase(pos)	=======Remove element at position
clear()	  =======  Removes all elements
empty()  =======	Checks if vector is empty

*/
/* ************************************************************ */
/* ************************************************************ */
/* ************************************************************ */
/* ************************************************************ */


// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> vec; // empty vector
    
//     vec.push_back(10);
//     vec.push_back(20);
//     vec.push_back(30);
//     vec.push_back(40);
//     vec.push_back(50);
    
//     vec.pop_back(); //delete the last element....

//     cout << vec.size() << endl; //3
//     cout << vec.capacity() << endl; // 4


//     for (int val : vec){
//         cout << val << " ";
//     }
//     cout << endl;
//     cout << "val at idx 2 : " << vec[2] << " or : " << vec.at(2) 
//      << endl; ///to find the value using index
//     cout << "Front : " << vec.front() << endl;
//     cout << "Back : " << vec.back() << endl;
//     return 0;
// }


/********************************************************* */
/********************************************************* */
/********************************************************* */
/********************************************************* */



// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> vec = {10, 20, 30, 40, 50}; // we can intialize our vector  here......
  
    
//     vec.pop_back(); //delete the last element....

//     cout << vec.size() << endl; //3
//     cout << vec.capacity() << endl; // 4


    for (int val : vec){
        cout << val << " ";
    }
    cout << endl;
    cout << "val at idx 2 : " << vec[2] << " or : " << vec.at(2) 
     << endl; ///to find the value using index
    cout << "Front : " << vec.front() << endl;
    cout << "Back : " << vec.back() << endl;
    return 0;
}