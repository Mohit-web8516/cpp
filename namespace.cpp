//Namespace = provides a solution for preventing name ///
// conflicts in large projects.Each entity needs to be given a unique name .
//A namespace allows for identically named //
// entities as long as they are in different namespaces

// #include <iostream>
// using namespace std;
// int main (){
//     int x = 0;
//     int x = 1; // This is a valid redeclaration in a different variable name
//     cout << x << " " << x << endl;
//     return 0;
// }


//////////USING NAMESPACE//////////
// #include <iostream>

// using namespace std;

// namespace first{
//     int x = 10;
// }
// namespace second{
//     int x = 20;
// }
// int main (){
//     int x = 0; // This is a valid redeclaration in the global namespace
//     cout << x << endl ; // Accessing x from the global namespace;
//     cout << second :: x << endl; // Accessing x from the second namespace
//     cout << first :: x << endl; // Accessing x from the first namespace
// }
////////////////////////////////////////////////
////////////////////////////////////////////////
////////////////////////////////////////////////
////////////////////////////////////////////////
////////////////////////////////////////////////
////////////////////////////////////////////////
////////////////////////////////////////////////
////////////////////////////////////////////////
////////////////////////////////////////////////

#include <iostream>

using namespace std;

namespace first{
    int x = 10;
}
namespace second{
    int x = 20;
}
int main (){
    using namespace first; // This allows us to access members of the 'first' namespace without declaring the namespace each time i.e. we can directly use x instead of first::x
 

    cout << x << endl ; 

    cout << second :: x << endl; 
    
    cout <<  x << endl; 
}
